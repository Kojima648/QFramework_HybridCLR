using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace QFramework.WuZiQi
{
    /// <summary>
    /// Gameplay 相当于是一个 GameController
    /// </summary>
    public partial class Gameplay : ViewController
    {

        Vector2[,]    mChessPos; //可以放置棋子的位置

        /// <summary>
        /// 落点的状态
        /// </summary>
        public enum ChessPosStatus
        {
            Blank = 0,
            Black = 1,
            White = -1
        }

        /// <summary>
        /// 刚下的棋子状态
        /// </summary>
        ChessPosStatus             mChessPosStatus;
        
        /// <summary>
        /// 棋盘当前的数据 15 x 15
        /// </summary>
        List<List<ChessPosStatus>> mSnapshotMap;
        
        
        /// <summary>
        /// 判断 NearBy 时候的阈值
        /// </summary>
        public float          Threshold = 0.2f;

        /// <summary>
        /// 该谁了?
        /// </summary>
        ChessPosStatus mTurn = ChessPosStatus.Black;


        /// <summary>
        /// 黑色棋子
        /// </summary>
        private GameObject mBlackChessPrefab;

        /// <summary>
        /// 白色棋子
        /// </summary>
        private GameObject mWhiteChessPrefab;

        private bool isGameOver = false;

        private ResLoader mResLoader = null;

        void Start()
        {
            // ResLoader 的申请要确保在 ResKit.Init 之后
            mResLoader = ResLoader.Allocate();

            // 动态加载两个棋子
            mBlackChessPrefab = mResLoader.LoadSync<GameObject>("BlackChess");
            mWhiteChessPrefab = mResLoader.LoadSync<GameObject>("WhiteChess");

            // 初始化棋盘
            InitBoard();

            var mousePos = Vector2.zero;
            
            // 鼠标的点击输入事件处理
            this.Repeat()
                .Until(() => Input.GetMouseButton(0) && !isGameOver) // 使用 Button 好像体验更好一点
                .Event(() => {
                    //把鼠标在屏幕坐标下的位置转换成世界坐标
                    mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

                    //找到鼠标的位置与棋盘上的哪个落棋点最近
                    for (int row = 0; row < 15; row++)
                    {
                        for (int col = 0; col < 15; col++)
                        {
                            //找到最近的落棋点
                            if (GameplayUtil.IsNearBy(mousePos, mChessPos[row, col], Threshold))
                            {
                                //在该位置创建棋子
                                CreateChess(row, col, mChessPos[row, col]);
                            }
                        }
                    }
                }).Begin();
            
            
            TypeEventSystem.Global.Register<GameResetEvent>(ResetGame);
        }

        /// <summary>
        /// 重置游戏
        /// </summary>
        void ResetGame(GameResetEvent gameResetEvent)
        {
            // 清除所有一下过的棋
            Chesses.DestroyChildren();

            // 清空数据
            foreach (var line in mSnapshotMap)
            {
                for (int i = 0; i < line.Count; i++)
                {
                    line[i] = ChessPosStatus.Blank;
                }
            }

            // 重置游戏状态
            isGameOver = false;
        }

        private void OnDestroy()
        {
            TypeEventSystem.Global.UnRegister<GameResetEvent>(ResetGame);

            mResLoader.Recycle2Cache();
            mResLoader = null;
        }

        /// <summary>
        /// 初始化棋盘（只需要执行一次即可)
        /// </summary>
        void InitBoard()
        {
            // 落子点
            mChessPos = new Vector2[15, 15];

            // 每个落子点的状态
            // 二维列表
            mSnapshotMap = Enumerable.Range(0, 15)
                .Select(_ => Enumerable.Range(0, 15)
                    .Select(i => new ChessPosStatus())
                    .ToList())
                .ToList();
            

            //计算每个落棋点的位置，并存入数组中
            for (int row = 0; row < 15; row++)
            {
                for (int col = 0; col < 15; col++)
                {
                    //把每个落棋点存入二维数组中
                    mChessPos[row, col] = new Vector2(Borders.GridWidth * (col - 7), Borders.GridHeight * (row - 7));

                } //end col
            } //end row
        }


        /// <summary>
        /// 创建棋子
        /// </summary>
        /// <param name="row"></param>
        /// <param name="col"></param>
        /// <param name="putPosition"></param>
        void CreateChess(int row, int col, Vector2 putPosition)
        {
            //如果该处没有棋子
            if (mSnapshotMap[row][col] == ChessPosStatus.Blank)
            {
                //修改数据快照，把该空位置设置为对应落棋方的状态
                mSnapshotMap[row][col] = mTurn;

                if (mTurn == ChessPosStatus.Black)
                {
                    mBlackChessPrefab.Instantiate()
                        .transform
                        .Parent(Chesses)
                        .LocalIdentity()
                        .Position(putPosition.x, putPosition.y, 0)
                        .Name(mTurn.ToString() + row + "_" + col);
                }
                else
                {
                    mWhiteChessPrefab.Instantiate()
                        .transform
                        .Parent(Chesses)
                        .LocalIdentity()
                        .Position(putPosition.x, putPosition.y, 0)
                        .Name(mTurn.ToString() + row + "_" + col);
                }

                CheckWiner(row, col);

                mTurn = mTurn == ChessPosStatus.Black ? ChessPosStatus.White : ChessPosStatus.Black;
            }
        }
        

        /// <summary>
        /// 检查是否获胜
        /// </summary>
        /// <param name="row"></param>
        /// <param name="col"></param>
        void CheckWiner(int row, int col)
        {
            if (GameplayUtil.IsWin(row, col, mTurn, mSnapshotMap))
            {
                isGameOver = true;

                TypeEventSystem.Global.Send(new GameOverEvent()
                {
                    IsBlackWin = mTurn == ChessPosStatus.Black
                });
            }
        }
    }
}