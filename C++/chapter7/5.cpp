#include <iostream>

using namespace std;

char* StrRepeat(const char ch,const int num);



int main()
{
  char ch;
  int num;
  cout<<"Enter the character:";
  cin.get(ch);
  cout<<"Enter the num to repeat:";
  cin>>num;
  char* ret_str=StrRepeat(ch,num);
  cout<<"The result string is:"<<endl;
  cout<<ret_str<<endl;

  delete [] ret_str;
  return 0;
}



char* StrRepeat(const char ch,const int num)
{
  char* ret=new char[num];
  ret[num]='\0';
  for(int i=0;i<num;i++)
  {
    ret[i]=ch;
  }
  return ret;
}
