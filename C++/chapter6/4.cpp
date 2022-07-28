#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char automobile[50];
  int year;
  double a_price;
  double d_price;

  ofstream out_file;
  out_file.open("carinfo.txt");

  cout<<"Enter the make and model of the automobile:";
  cin.getline(automobile,50);
  cout<<"Enter the model year:";
  cin>>year;
  cout<<"Enter the original asking price:";
  cin>>a_price;
  d_price=a_price*0.913;


  out_file<<"Make and Model:"<<automobile<<endl;
  out_file<<"Year:"<<year<<endl;
  out_file<<"Was asking:"<<a_price<<endl;
  out_file<<"Now asking:"<<d_price<<endl;

  out_file.close();
  cout<<"Done"<<endl;
  return 0;
}
