#include "p1.h"
#include <iostream>

using namespace std;

int main()
{
  golf golf_arr[5];
  int i=1;
  setgolf(golf_arr[0],"Mike",20);
  while(setgolf(golf_arr[i])&&i<5)i++;
  cout<<"Here are the information:"<<endl;
  for(int j=0;j<i;j++)
  {
    showgolf(golf_arr[j]);
  }
  return 0;
}

