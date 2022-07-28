#include "coordin.h"
#include <iostream>

using namespace std;

int main()
{
  double x,y;
  Polar ret;
  Rect org;
  cout<<"Enter the x and y of rect:";
  while(std::cin>>x>>y)
  {
    org.x=x;
    org.y=y;
    RectToPolar(&org,&ret);
    ShowInfo(&ret);
    std::cout<<"Enter the x and y of rect:";
  }

  return 0;
}
