#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  string str1;
  cout<<"Please input a word:";
  getline(cin,str1);
  cout<<"Your word is "<<str1<<endl;
  string str2=str1;
  string str3="Hello "+str1;
  cout<<"Another str is "<<str2<<endl;
  cout<<str3<<endl;
  char chartr1[]="Apple";
  char chartr2[20];
  char chartr3[20];
  strcpy(chartr2, chartr1);
  strcat(chartr1," Inc.");
  cout<<"chartr1:"<<chartr1<<endl;
  cout<<"chartr2:"<<chartr2<<endl;
  return 0;
}
