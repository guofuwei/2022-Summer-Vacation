#ifndef  __CONRDIN_H__
#define __CONRDIN_H__
const double PI=3.1415926535;
 
struct Rect{
  double x;
  double y;
};

struct Polar{
  double distance;
  double angle;
};

void RectToPolar(const Rect*,Polar*);
void ShowInfo(const Polar*);
#endif
