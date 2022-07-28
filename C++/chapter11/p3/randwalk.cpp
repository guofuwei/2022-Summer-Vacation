#include <climits>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

const int N=100;

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
  unsigned long max_step=0;
  unsigned long min_step=INT_MAX;
  unsigned long total_steps=0;
  double target;
  double dstep;
  cout<<"Enter the target distance(q to quit):";
  while(cin>>target)
  {
    cout<<"Enter step length:";
    if(!(cin>>dstep))break;
    
    for(int i=0;i<N;i++)
    {
      while(result.magval()<target)
      {
        direction=rand()%360;
        step.reset(dstep,direction,Vector::POL);
        result=result+step;
        steps++;
      }

      total_steps+=steps;
      if(steps>max_step)max_step=steps;
      if(steps<min_step)min_step=steps;

      steps=0;
      result.reset(0.0, 0.0);
    }

    //cout<<"After "<<steps<<" steps,the subject have following the location."<<endl;
    //cout<<result<<"or ";
    //result.pol_mode();
    //cout<<result<<endl;
    //cout<<"Average of per step is "<<result.magval()/steps<<endl;

    cout<<"The average steps is "<<total_steps/N<<endl;
    cout<<"The max steps is "<<max_step<<endl;
    cout<<"The min steps is "<<min_step<<endl;
    total_steps=0;
    max_step=0;
    min_step=INT_MAX;

    cout<<"Enter the target distance(q to quit):";
  }
  cout<<"Bye"<<endl;
  cin.clear();
  while(cin.get()!='\n');
  return 0;
}
