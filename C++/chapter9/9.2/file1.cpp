#include "coordin.h"
#include <cmath>
#include <iostream>

using namespace std;

void RectToPolar(const Rect* org,Polar* ret)
{
  ret->distance=sqrt(org->x*org->x+org->y*org->y);
  ret->angle=atan2(org->y,org->x)*180/PI;
}
void ShowInfo(const Polar* input)
{
  std::cout<<"Distance:"<<input->distance<<std::endl;
  std::cout<<"Angle:"<<input->angle<<std::endl;
}
