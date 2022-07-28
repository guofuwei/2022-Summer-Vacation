#include <iostream>
#include <new>
using namespace std;

const int N=5;
const int BUF=512;
char buffer[BUF];

int main()
{
  double *p1,*p2;
  p1=new double [N];
  p2=new(buffer) double [N];
  for(int i=0;i<N;i++)
  {
    p1[i]=p2[i]=1000+20*i;
  }
  cout<<"Memory address"<<endl;
  cout<<"heap:"<<p1<<"\t"<<"static:"<<(void *)buffer<<endl;
  cout<<"Memory content:"<<endl;
  for(int i=0;i<N;i++)
  {
    cout<<p1[i]<<" at address:"<<&p1[i]<<"\t";
    cout<<p2[i]<<" at address:"<<&p2[i]<<endl;
  }
  
  cout<<"Calling new and placement a second time"<<endl;
  double *p3,*p4;
  p3=new double [N];
  p4=new(buffer) double [N];
  for(int i=0;i<N;i++)
  {
    p3[i]=p4[i]=1000+40*i;
  }
  cout<<"Memory content:"<<endl;
  for(int i=0;i<N;i++)
  {
    cout<<p3[i]<<" at address:"<<&p3[i]<<"\t";
    cout<<p4[i]<<" at address:"<<&p4[i]<<endl;
  }

  cout<<"Calling new and placement a third time"<<endl;
  delete [] p1;
  p1=new double [N];
  p2=new(buffer+N*sizeof(double)) double [N];
  for(int i=0;i<N;i++)
  {
    p1[i]=p2[i]=1000+60*i;
  }
  cout<<"Memory content:"<<endl;
  for(int i=0;i<N;i++)
  {
    cout<<p1[i]<<" at address:"<<&p1[i]<<"\t";
    cout<<p2[i]<<" at address:"<<&p2[i]<<endl;
  }

  return 0;
}
