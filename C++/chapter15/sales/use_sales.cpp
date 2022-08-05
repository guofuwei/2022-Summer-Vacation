#include "sales.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  double vals1[12] = { 1220, 1100, 1122, 2212,
    1232, 2334, 2884, 2393,
    3302, 2922, 3002, 3544 };
  double vals2[12] = { 12, 11, 22, 21, 32, 
    34, 28, 29, 33, 29, 32, 35 };
  Sales sale1(2011,vals1,12);
  LabeledSales sale2("BlogStar",2012,vals2,12);

  cout<<"first try block"<<endl;
  try
  {
    int i;
    cout<<"Year = "<<sale1.Year()<<endl;
    for(i=0;i<12;i++)
    {
      cout<<sale1[i]<<" ";
      if(i%6==5)cout<<endl;
    }
    cout<<"Year = "<<sale2.Year()<<endl;
    cout<<"Label = "<<sale2.Label()<<endl;
    for(i=0;i<=12;i++)
    {
      cout<<sale2[i]<<" ";
      if(i%6==5)cout<<endl;
    }
    cout<<"end block1 try"<<endl;
  }
  catch(LabeledSales::nbad_index &bad)
  {
    cout<<bad.what();
    cout<<"Company: "<<bad.label_val()<<endl;
    cout<<"Bad Index: "<<bad.bi_val()<<endl;
  }
  catch(Sales::bad_index &bad)
  {
    cout<<bad.what();
    cout<<"Bad Index: "<<bad.bi_val()<<endl;
  }
  cout<<endl<<"Next try block"<<endl;
  try{
    sale2[2]=37.5;
    sale1[20]=23345;
    cout<<"End of try block2"<<endl;
  }
  catch(LabeledSales::nbad_index &bad)
  {
    cout<<bad.what();
    cout<<"Company: "<<bad.label_val()<<endl;
    cout<<"Bad Index: "<<bad.bi_val()<<endl;
  }
  catch(Sales::bad_index &bad)
  {
    cout<<bad.what();
    cout<<"Bad Index: "<<bad.bi_val()<<endl;
  }
  cout<<"Done!"<<endl;
  return 0;
}
