#ifndef __TETRIS_H__
#define __TETRIS_H__

#include "cocos2d.h"
USING_NS_CC;

class TetrisScene : public Scene
{
public:
  TetrisScene();
  virtual ~TetrisScene();

public:
  static Scene *create();
  bool init();
};

#endif