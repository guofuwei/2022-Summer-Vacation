#include <iostream>

using namespace std;

// s2 must be const
string version1(const string &s1,const string &s2);
const string &version2(string &s1,const string &s2);
const string &version3(string &s1,const string &s2);

int main()
{
  string input,copy,result;
  cout<<"Enter a string:"<<endl;
  getline(cin,input);
  copy=input;

  cout<<"Version1"<<endl;
  cout<<"You string enhanced:"<<version1(input,"*****")<<endl;
  cout<<"You origin string:"<<input<<endl;

  input=copy;
  cout<<"Version2"<<endl;
  cout<<"You string enhanced:"<<version2(input,"*****")<<endl;
  cout<<"You origin string:"<<input<<endl;

  input=copy;
  cout<<"Version3"<<endl;
  cout<<"You string enhanced:"<<version3(input,"*****")<<endl;
  cout<<"You origin string:"<<input<<endl;
}

string version1(const string &s1,const string &s2)
{
  string tmp;
  tmp=s2+s1+s2;
  return tmp;
}
const string &version2(string &s1,const string &s2)
{
  s1=s2+s1+s2;
  return s1;
}
const string &version3(string &s1,const string &s2)
{
  string tmp;
  tmp=s2+s1+s2;
  return tmp;
}
