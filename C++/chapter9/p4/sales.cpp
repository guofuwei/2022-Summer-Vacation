#include "p4.h"
#include <iostream>


namespace SALES
{
  using std::cout;
  using std::cin;
  using std::endl;
  void setSales(Sales &s,const double ar[],int n)
  {
    double max_num,min_num,sum;
    max_num=min_num=ar[0];
    sum=0;
    for(int i=0;i<n&&i<4;i++)
    {
      sum+=ar[i];
      s.sales[i]=ar[i];
      if(ar[i]>max_num)max_num=ar[i];
      else if(ar[i]<min_num)min_num=ar[i];
    }
    if(n<4)
    {
      for(int i=n;i<4;i++)
      {
        s.sales[i]=0;
      }
    }
    s.max=max_num;
    s.min=min_num;
    s.average=sum/n;
  }


  void setSales(Sales &s)
  {
    int i=0;
    double min_num,max_num,sum;
    while(i<4)
    {
      cout<<"Enter the sales for season "<<i+1<<":"<<endl;
      cin>>s.sales[i];
      if(i==0)
      {
        max_num=min_num=s.sales[0];
      }
      else if(s.sales[i]>max_num)max_num=s.sales[i];
      else if(s.sales[i]<min_num)min_num=s.sales[i];
      sum+=s.sales[i];
      i++;
    }
    s.max=max_num;
    s.min=min_num;
    s.average=sum/4;
  }

  void showSales(const Sales &s)
  {
    cout<<"Here are sale info"<<endl;
    for(int i=0;i<4;i++)
    {
      cout<<"#"<<i+1<<":"<<s.sales[i]<<endl;
    }
    cout<<"min:"<<s.min<<endl;
    cout<<"max:"<<s.max<<endl;
    cout<<"average:"<<s.average<<endl;
  }
}
