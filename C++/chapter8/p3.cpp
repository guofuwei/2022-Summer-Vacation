#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void UpString(string &str);

int main()
{
  string s;
  cout<<"Enter a string:";
  getline(cin,s);
  while(s!="q")
  {
    UpString(s);
    cout<<s<<endl;
    cout<<"Next string:";
    getline(cin,s);
  }
  return 0;
}

void UpString(string &str)
{
  int i=0;
  while(str[i])
  {
    str[i]=toupper(str[i]);
    i++;
  }
}
