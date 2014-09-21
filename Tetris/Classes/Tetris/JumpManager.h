#ifndef __JUMP_MANAGER_H__
#define __JUMP_MANAGER_H__

#include "cocos2d.h"
USING_NS_CC;

typedef enum ELayer
{
  E_LAYER_LOADING,
  E_LAYER_TETRIS,
};

class JumpManager
{
public:
  JumpManager();
  virtual ~JumpManager();

public:
  static Scene * JumpTo(ELayer layer);
};

#endif