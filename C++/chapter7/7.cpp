#include <iostream>
#include <cmath>

using namespace std;

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

int main()
{
  double x,y;
  Polar ret;
  Rect org;
  cout<<"Enter the x and y of rect:";
  while(cin>>x>>y)
  {
    org.x=x;
    org.y=y;
    RectToPolar(&org,&ret);
    ShowInfo(&ret);
    cout<<"Enter the x and y of rect:";
  }

  return 0;
}



void RectToPolar(const Rect* org,Polar* ret)
{
  ret->distance=sqrt(org->x*org->x+org->y*org->y);
  ret->angle=atan2(org->y,org->x)*180/PI;
}
void ShowInfo(const Polar* input)
{
  cout<<"Distance:"<<input->distance<<endl;
  cout<<"Angle:"<<input->angle<<endl;
}

