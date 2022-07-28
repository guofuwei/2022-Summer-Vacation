#include <iostream>

using namespace std;

double add(double x,double y);
double sub(double x,double y);
double mult(double x,double y);

const string method[3]={"add","sub","mult"};
int main()
{
  double (*p_fun_array[3])(double,double)={add,sub,mult};
  // auto p_fun_array={add,sub,mult}  C++11 std
  double x,y;
  cout<<"Enter two double num:";
  while(cin>>x>>y)
  {
    for(int i=0;i<3;i++)
    {
      cout<<"result of "<<method[i]<<"\t"<<(*p_fun_array[i])(x,y)<<endl;
    }
    cout<<"Enter two double num:";
  }
  return 0;
}



double add(double x,double y)
{
  return x+y;
}
double sub(double x,double y)
{
  return x-y;
}
double mult(double x,double y)
{
  return x*y;
}
