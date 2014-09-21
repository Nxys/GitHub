
#include "TetrisLogic.h"


const int g_nBox[7][4][4] = {
  {{0,0,0,0}
  ,{1,1,1,1}
  ,{0,0,0,0}
  ,{0,0,0,0}},
  {{0,0,0,0}
  ,{0,2,2,0}
  ,{0,2,2,0}
  ,{0,0,0,0}},
  {{3,0,0,0}
  ,{3,3,3,0}
  ,{0,0,0,0}
  ,{0,0,0,0}},
  {{0,0,4,0}
  ,{4,4,4,0}
  ,{0,0,0,0}
  ,{0,0,0,0}},
  {{0,5,0,0}
  ,{5,5,5,0}
  ,{0,0,0,0}
  ,{0,0,0,0}},
  {{6,6,0,0}
  ,{0,6,6,0}
  ,{0,0,0,0}
  ,{0,0,0,0}},
  {{0,7,7,0}
  ,{7,7,0,0}
  ,{0,0,0,0}
  ,{0,0,0,0}}};

TetrisLogic::TetrisLogic()
{
  ClearContainer();
}

TetrisLogic::~TetrisLogic()
{
}

//创建方块
tagBox TetrisLogic::CreateBox()
{
  srand(time(NULL));
  int nRand = rand() * 7 / (RAND_MAX + 1);
  tagBox box;
  box.nBoxType = nRand;
  memcpy(box.nData, g_nBox[nRand], sizeof(box.nData));
  return box;
}

//是否可放下
bool TetrisLogic::IsCanDown()
{
  return true;
}

//转动方块
void TetrisLogic::TurnBox()
{
}

//消除一行
void TetrisLogic::DeleteFullLine()
{
}

//清空容器
void TetrisLogic::ClearContainer()
{
  memset(m_nBoxContainer, 0, sizeof(m_nBoxContainer));
}

bool TetrisLogic::IsGameOver()
{
  bool bIsGameOver = false;
  for (int i = 0; i < MAX_COL; ++i)
  {
    if (m_nBoxContainer[MAX_ROW - 1][i] != 0)
    {
      bIsGameOver = true;
      break;
    }
  }
  return bIsGameOver;
}
