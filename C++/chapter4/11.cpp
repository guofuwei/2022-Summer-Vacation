#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char *p_ch="Hello";
  char chstr[20];
  cout<<p_ch<<endl;
  cout<<"input a string:";
//  cin>>p_ch;
  cin.getline(chstr,20);
  cout<<chstr<<" at "<<(int *)chstr<<endl;
  char* p_str=new char[strlen(chstr)+1];
  strcpy(p_str, chstr);
  cout<<p_str<<" at "<<(int *)p_str<<endl;
  
  delete[] p_str;
  return 0;
}
