#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"


int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  using VECTOR::Vector;

  srand(time(0));
  double direction;
  Vector step;
  Vector result(0.0,0.0);
  unsigned long steps=0;
  double target;
  double dstep;
  cout<<"Enter the target distance(q to quit):";
  while(cin>>target)
  {
    cout<<"Enter step length:";
    if(!(cin>>dstep))break;
    
    while(result.magval()<target)
    {
      direction=rand()%360;
      step.reset(dstep,direction,Vector::POL);
      result=result+step;
      steps++;
    }
    cout<<"After "<<steps<<" steps,the subject have following the location."<<endl;
    cout<<result<<"or ";
    result.pol_mode();
    cout<<result<<endl;
    cout<<"Average of per step is "<<result.magval()/steps<<endl;
    steps=0;
    result.reset(0.0, 0.0);
    cout<<"Enter the target distance(q to quit):";
  }
  cout<<"Bye"<<endl;
  cin.clear();
  while(cin.get()!='\n');
  return 0;
}
