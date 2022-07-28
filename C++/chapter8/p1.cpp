#include <iostream>

using namespace std;


void NPrint(const char* chstr,int n=0);


int main()
{
  const char* chstr="I love C++";
  cout<<"first print"<<endl;
  NPrint(chstr);
  cout<<"second print"<<endl;
  NPrint(chstr,2);
  return 0;
}


void NPrint(const char* chstr,int n)
{
  static int num=0;
  num++;
  if(n==0)
  {
    cout<<chstr<<endl;
  }
  else
  {
    for(int i=0;i<num;i++)
    {
      cout<<chstr<<endl;
    }
  }
}
