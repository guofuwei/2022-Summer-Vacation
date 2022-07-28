#include <ctime>
#include <iostream>

using namespace std;


struct Job
{
  string name;
  double salary;
  int floor;
};

template <typename T>
void Swap(T &a,T &b);
template<> void Swap<Job>(Job &j1,Job &j2);
void ShowInfo(const Job &j);

int main()
{
  int x=10;
  int y=20;
  double a=1.5;
  double b=2.5;
  cout<<"x="<<x<<",y="<<y<<endl;
  cout<<"After swap(x,y)"<<endl;
  Swap(x,y);
  cout<<"x="<<x<<",y="<<y<<endl;

  cout<<"a="<<a<<",b="<<b<<endl;
  cout<<"After swap(a,b)"<<endl;
  Swap(a,b);
  cout<<"a="<<a<<",b="<<b<<endl;

  Job j1={"Mike",20000.0,10};
  Job j2={"Bob",120000.0,9};
  ShowInfo(j1);
  ShowInfo(j2);
  cout<<"After Swap(j1,j2)"<<endl;
  Swap(j1, j2);
  ShowInfo(j1);
  ShowInfo(j2);

  return 0;
}


template <typename T>
void Swap(T &a,T &b)
{
  T temp;
  temp=a;
  a=b;
  b=temp;
}


template<> void Swap<Job>(Job &j1,Job &j2)
{
  double temp1;
  int temp2;
  temp1=j1.salary;
  j1.salary=j2.salary;
  j2.salary=temp1;

  temp2=j1.floor;
  j1.floor=j2.floor;
  j2.floor=temp2;
}

void ShowInfo(const Job &j)
{
  cout<<"Here is the info"<<endl;
  cout<<"name:"<<j.name<<endl;
  cout<<"salary:"<<j.salary<<endl;
  cout<<"floor:"<<j.floor<<endl;
}
