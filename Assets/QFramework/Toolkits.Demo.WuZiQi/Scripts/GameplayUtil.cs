using System;
using System.Collections.Generic;
using UnityEngine;

namespace QFramework.WuZiQi
{
    /// <summary>
    /// 承担一部分计算的职责
    /// </summary>
    public class GameplayUtil
    {
        /// <summary>
        /// 判断鼠标与落棋点之间是否是邻近的
        /// </summary>
        /// <param name="mousePos"></param>
        /// <param name="chessPoint"></param>
        /// <returns></returns>
        public static bool IsNearBy(Vector2 mousePos, Vector2 chessPoint, float threshold)
        {
            //计算鼠标位置与落棋点之间的曼哈顿距离，小于阈值则表示两者相近，返回true
            if (Mathf.Abs(chessPoint.x - mousePos.x) + Mathf.Abs(chessPoint.y - mousePos.y) < threshold)
            {
                return true;
            }

            return false;
        }

        static bool BorderCondition(int row, int col)
        {
            return row >= 0 && row < 15 && col >= 0 && col < 15;
        }

        /// <summary>
        /// 八个方向进行递归
        /// </summary>
        /// <param name="row"></param>
        /// <param name="col"></param>
        /// <param name="chessPosStatus"></param>
        /// <param name="snapshotMap"></param>
        /// <returns></returns>
        public static bool IsWin(int row, int col, Gameplay.ChessPosStatus chessPosStatus,
            List<List<Gameplay.ChessPosStatus>> snapshotMap)
        {

            // 上下判断
            var upCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, 0, 1);
            var downCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, 0, -1);

            // 因为都包括自己
            if (upCount + downCount >= 6)
            {
                return true;
            }

            // 左右判断
            var leftCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, -1, 0);
            var rightCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, 1, 0);

            if (leftCount + rightCount >= 6)
            {
                return true;
            }


            // 左上和右下
            var upLeftCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, -1,
                1);
            var downRightCount =
                ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, 1, -1);

            if (upLeftCount + downRightCount >= 6)
            {
                return true;
            }

            // 右上和左下
            var upRightCount =
                ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, 1, 1);
            var downLeftCount = ContiniousCount(row, col, chessPosStatus, snapshotMap, 0, BorderCondition, -1, -1);


            if (upRightCount + downLeftCount >= 6)
            {
                return true;
            }

            return false;
        }

        /// <summary>
        /// 判断这个防线是有几个连续的
        /// </summary>
        /// <param name="row"></param>
        /// <param name="col"></param>
        /// <param name="chessPosStatus"></param>
        /// <param name="snapshotMap"></param>
        /// <param name="count"></param>
        /// <param name="borderCondition"></param>
        /// <param name="rowIncrease"></param>
        /// <param name="colIncrease"></param>
        /// <returns></returns>
        static int ContiniousCount(
            int row,
            int col,
            Gameplay.ChessPosStatus chessPosStatus,
            List<List<Gameplay.ChessPosStatus>> snapshotMap,
            int count,
            Func<int, int, bool> borderCondition,
            int rowIncrease,
            int colIncrease)
        {
            if (borderCondition(row, col) && snapshotMap[row][col] == chessPosStatus)
            {
                count++;


                return ContiniousCount(row + rowIncrease, col + colIncrease, chessPosStatus, snapshotMap, count,
                    borderCondition, rowIncrease, colIncrease);
            }

            return count;
        }
    }
}