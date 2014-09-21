
#include "TetrisScene.h"
#include "TetrisDef.h"
#include "TetrisLayer.h"


TetrisScene::TetrisScene()
{
}

TetrisScene::~TetrisScene()
{
}

Scene *TetrisScene::create()
{
  TetrisScene *ret = new TetrisScene();
  if (ret && ret->init())
  {
    ret->autorelease();
    return ret;
  }
  else
  {
    CC_SAFE_DELETE(ret);
    return NULL;
  }
}

bool TetrisScene::init()
{
  if (!Scene::init())
  {
    return false;
  }

  auto pBox = TetrisLayer::create();
  //pBox->setPosition(WIN_SIZE/2);
  addChild(pBox);

  return true;
}
