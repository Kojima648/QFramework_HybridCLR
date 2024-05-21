using System;
using UnityEngine;
using QFramework;

namespace QFramework.WuZiQi
{
	public partial class Borders : ViewController
	{
		private Vector2 mPosTopLeft;
		private Vector2 mPosTopRight;
		private Vector2 mPosBottomLeft;
		private Vector2 mPosBottomRight; //左上角、右上角、左下角、右下角坐标值

		private float mGridWidth;
		private float mGridHeight; //棋盘上一格的宽度和高度
		
		private void Awake()
		{
			//获得左上角、右上角、左下角、右下角的位置数据
			// 期盼边界
			mPosTopLeft = TopLeftPos.position;
			mPosTopRight = TopRightPos.position;
			mPosBottomLeft = BottomLeftPos.position;
			mPosBottomRight = BottomRightPos.position;

			//计算每格的宽度和高度
			mGridWidth = (mPosTopRight.x - mPosTopLeft.x) / 14;
			mGridHeight = (mPosTopRight.y - mPosBottomRight.y) / 14;
		}

		public float GridWidth
		{
			get { return mGridWidth; }
		}

		public float GridHeight
		{
			get { return mGridHeight; }
		}
	}
}
