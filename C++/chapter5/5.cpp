#include <iostream>

using namespace std;

int main()
{
  char ch;
  int count=0;
  cout<<"Enter a string:";
  while(cin.get(ch))
  {
    cout<<ch;
    count++;
  }
  cout<<"The count of character is "<<count<<endl;
  return 0;
}
