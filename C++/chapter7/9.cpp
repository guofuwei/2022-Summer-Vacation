#include <iostream>

using namespace std;

const double* f1(const double* arr,int n);
const double* f2(const double arr[],int n);
const double* f3(const double arr[],int n);

int main()
{
  double av[3]={1.0,2.5,7.8};
  cout<<"Address\t\tValue"<<endl;
  // Part1 p1,p2:pointer of function
  const double* (*p1)(const double*,int)=f1;
  auto p2=f2;
  cout<<"Part1"<<endl;
  cout<<(*p1)(av,3)<<"\t"<<*(*p1)(av,3)<<endl;
  cout<<(*p2)(av,3)<<"\t"<<*(*p2)(av,3)<<endl;

  // Part2 pa,pb:array of pointer for function
  const double* (*pa[3])(const double*,int)={f1,f2,f3};
  auto pb=pa;
  cout<<"Part2"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<pa[i](av,3)<<"\t"<<*pa[i](av,3)<<endl;
  }

  // Part3 pc,pd:array of function pointers
  const double* (*(*pc)[3])(const double*,int)=&pa;
  auto pd=&pa;
  cout<<"Part3"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<(*pc)[i](av,3)<<"\t"<<*(*pc)[i](av,3)<<endl;
  }
  return 0;
}




const double* f1(const double* arr,int n)
{
  return arr;
}
const double* f2(const double arr[],int n){
  return arr+1;
}
const double* f3(const double arr[],int n){
  return arr+2;
}
