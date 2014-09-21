#ifndef __BOX_LAYER_H__
#define __BOX_LAYER_H__

#include "cocos2d.h"
USING_NS_CC;
#include "Shape.h"

#define ORDER_OFFSET 5

class TetrisLayer : public Layer
{
public:
  TetrisLayer();
  virtual ~TetrisLayer();

public:
  static Layer *create();
  bool init();

  void update(float interval);

private:
  Vector<Shape*>    m_ShapeList;
};

#endif