
#include "Loading.h"
#include "TetrisDef.h"
#include "JumpManager.h"


Loading::Loading()
{
}

Loading::~Loading()
{
}

Scene * Loading::create()
{
  Loading *ret = new Loading();
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

bool Loading::init()
{
  if (!Scene::init())
  {
    return false;
  }

  auto pLabel = Label::createWithSystemFont("Loading...", "ºÚÌå", 28);
  pLabel->setPosition(WIN_SIZE/2);
  addChild(pLabel);

  scheduleOnce(schedule_selector(Loading::update), 2);

  return true;
}

void Loading::update(float interval)
{
  JumpManager::JumpTo(E_LAYER_TETRIS);
}