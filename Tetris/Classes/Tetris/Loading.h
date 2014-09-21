#ifndef __LOADING_H__
#define __LOADING_H__

#include "cocos2d.h"
USING_NS_CC;

class Loading : public Scene
{
public:
  Loading();
  virtual ~Loading();

public:
  static Scene * create();
  bool init();

private:
  void update(float interval);
};

#endif