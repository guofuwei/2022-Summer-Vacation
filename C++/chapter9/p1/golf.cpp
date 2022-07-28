#include "p1.h"
#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
void setgolf(golf &g,const char* name,int hc)
{
  strcpy(g.fullname,name);
  g.handicap=hc;
}

int setgolf(golf &g)
{
  char *s=new char[Len];
  cout<<"Enter the fullname:";
  cin.getline(s,Len);
  if(!strcmp(s,""))
  {
    return 0;
  }
  int hc;
  std::cout<<"Enter the handicap:";
  std::cin>>hc;
  while(!cin)
  {
    cin.clear();
    while(cin.get()!='\n');
    std::cout<<"try again:";
    std::cin>>hc;
  }
  cin.get();
  setgolf(g,s,hc);
  return 1;
}

void handicap(golf &g, int hc)
{
  g.handicap=hc; 
}

void showgolf(const golf &g)
{
  cout<<"golf fullname:"<<g.fullname<<endl;
  cout<<"golf handicap:"<<g.handicap<<endl;
}
