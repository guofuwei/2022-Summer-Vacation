#include "string2.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
  String s1(" and I am a C++ student;");
  String s2("Please enter your name:");
  String s3;
  cout<<s2;
  cin>>s3;
  s2="My name is "+s3;
  //s2=s1;
  cout<<s2<<endl;
  s2=s2+s1;
  s2.Stringupper();
  cout<<"The string \""<<s2<<"\" contains "<<s2.countchar('A')<<" 'A' characters in it."<<endl;

  s1="red";
  String rgb[3]={String(s1),String("green"),String("blue")};
  cout<<"Enter the name of a primary color for mixing light:";
  String ans;
  bool success=false;
  while(cin>>ans)
  {
    ans.Stringlow();
    for(int i=0;i<3;i++)
    {
      if(ans==rgb[i])
      {
        cout<<"That's right"<<endl;
        success=true;
        break;
      }
    }
    if(success)
      break;
    else
      cout<<"Try again!"<<endl;
  }
  cout<<"Bye"<<endl;
  return 0;
}
