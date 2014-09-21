
#include "TetrisLayer.h"
#include "TetrisDef.h"


const char *IMG_PATH_BORDER = "border.png";

TetrisLayer::TetrisLayer()
{
}

TetrisLayer::~TetrisLayer()
{
}

Layer *TetrisLayer::create()
{
  TetrisLayer *ret = new TetrisLayer();
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

#define ROW 2
#define COL 3
void rotateArr()
{
  int arr[2][3] = {{0,1,1},{1,1,0}};
  int temp[ROW][COL], i, j, k;
  for (i=0,j=COL-1; j>=0; i++,j--)
  {
    for (k=0; k<COL; k++)
    {
      temp[k][j] = arr[i][k];
    }
    for (i=0; i<ROW; i++)
    {
      for (j=0; j<COL; j++)
      {
        printf("%5d",arr[i][j] = temp[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
}

bool TetrisLayer::init()
{
  if (!Layer::init())
  {
    return false;
  }

  auto pOrder = Sprite::create(IMG_PATH_BORDER);
  pOrder->setPosition(WIN_SIZE/2);
  addChild(pOrder);

  //根据背景图片设置层大小
  setContentSize(pOrder->getContentSize());

  //auto pShape = new Shape();
  //pShape->CreateShape(this);
  //m_ShapeList.pushBack(pShape);
  //rotateArr();

  //schedule(schedule_selector(TetrisLayer::update), 0.5);

  return true;
}

void TetrisLayer::update(float interval)
{
}
