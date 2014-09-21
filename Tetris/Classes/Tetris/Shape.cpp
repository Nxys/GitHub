
#include "Shape.h"


//const int g_nBoxWH[28][2] = {
//};

const Point g_ptBox[7][4] = {
  {Point(3, 14), Point(4, 14), Point(5, 14), Point(6, 14)},
  {Point(4, 14), Point(5, 14), Point(4, 13), Point(5, 13)},
  {Point(3, 14), Point(3, 13), Point(4, 13), Point(5, 13)},
  {Point(6, 14), Point(6, 13), Point(5, 13), Point(4, 13)},
  {Point(4, 14), Point(3, 13), Point(4, 13), Point(5, 13)},
  {Point(3, 14), Point(4, 14), Point(4, 13), Point(5, 13)},
  {Point(5, 14), Point(6, 14), Point(4, 13), Point(5, 13)}
};

Shape::Shape() :
  m_nShapeCount(0)
{
}

Shape::~Shape()
{
}

void Shape::CreateShape(Node *parent)
{
  srand(time(NULL));
  int nBoxType = rand() % 7 + 1;

  //´´½¨ÐÎ×´
  for (int i = 0; i < 4; ++i)
  {
    auto pBox = new tagBox(parent, m_nShapeCount, (EBoxType)nBoxType, g_ptBox[nBoxType][i]);
    m_Shape.pushBack(pBox);
  }
  m_nShapeCount++;
}
