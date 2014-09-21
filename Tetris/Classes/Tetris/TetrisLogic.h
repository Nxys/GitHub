#ifndef __BOX_LOGIC_H__
#define __BOX_LOGIC_H__

#include "TetrisDef.h"

#define MAX_ROW 15
#define MAX_COL 10

typedef struct tagBox
{
  int nBoxType;
  int nData[4][4];
} Box, LPBOX;

class TetrisLogic
{
public:
  TetrisLogic();
  virtual ~TetrisLogic();

public:
  //创建方块
  tagBox CreateBox();
  //是否可放下
  bool IsCanDown();
  //转动方块
  void TurnBox();
  //消除一行
  void DeleteFullLine();
  //清空容器
  void ClearContainer();
  //游戏是否结束
  bool IsGameOver();

private:
  int m_nBoxContainer[MAX_ROW][MAX_COL];
};

#endif