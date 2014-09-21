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
  //��������
  tagBox CreateBox();
  //�Ƿ�ɷ���
  bool IsCanDown();
  //ת������
  void TurnBox();
  //����һ��
  void DeleteFullLine();
  //�������
  void ClearContainer();
  //��Ϸ�Ƿ����
  bool IsGameOver();

private:
  int m_nBoxContainer[MAX_ROW][MAX_COL];
};

#endif