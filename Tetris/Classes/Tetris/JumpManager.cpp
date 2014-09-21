
#include "JumpManager.h"
#include "Loading.h"
#include "TetrisScene.h"


JumpManager::JumpManager()
{
}

JumpManager::~JumpManager()
{
}

Scene * JumpManager::JumpTo(ELayer layer)
{
  switch (layer)
  {
  case E_LAYER_LOADING:
    return Loading::create();
    break;
  case E_LAYER_TETRIS:
    //Director::getInstance()->replaceScene(Tetris::create());
    return TetrisScene::create();
    break;
  }

  return NULL;
}
