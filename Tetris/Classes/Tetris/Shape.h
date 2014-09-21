#ifndef __SHAPE_H__
#define __SHAPE_H__

#include "cocos2d.h"
USING_NS_CC;

#define MAX_ROW 15//14
#define MAX_COL 10//7
#define BOX_REAL_POS(pt) Point(pt.x*20+10, pt.y*20+10)
#define TO_WORLD_POS(p, pt) p->convertToWorldSpace(pt)

//��������
enum EBoxType
{
  E_BT_I = 1, E_BT_J, E_BT_L, E_BT_O, E_BT_S, E_BT_Z, E_BT_T, E_BT_OBSTACLE = 10
};

typedef struct tagBox : public Ref
{
  int         nKey;       //�洢��ֵ
  EBoxType    eBoxType;   //��������
  Point       ptBox;      //��������
  Sprite     *pBoxImg;    //����ͼƬ

  tagBox(Node *parent, int key, EBoxType type, Point pt)
  {
    nKey = key;
    eBoxType = type;
    ptBox = pt;
    pBoxImg = Sprite::create(String::createWithFormat("%d.png", type)->getCString());
    pBoxImg->setPosition(TO_WORLD_POS(parent, BOX_REAL_POS(pt)));
    parent->addChild(pBoxImg);
  }
} Box, LPBOX;

class Shape : public Ref
{
public:
  Shape();
  virtual ~Shape();

public:
  void CreateShape(Node *parent);

protected:
  int                 m_nShapeCount;    //��״����
  Vector<tagBox *>    m_Shape;          //��״�еķ���
};

#endif