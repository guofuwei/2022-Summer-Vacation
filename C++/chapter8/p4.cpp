#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;

struct stringy{
  char* str;
  int ct;
};

void set(stringy &beany,char *testing);
void show(const stringy &beany,int n=1);
void show(const char* testing,int n=1);

int main()
{
  stringy beany;
  char testing[]="Reality isn't what it used to be.";
  set(beany,testing);
  show(beany);
  show(beany,2);
  testing[0]='D';
  testing[1]='u';
  show(testing);
  show(testing,3);
  show("Done");
  return 0;
}

void set(stringy &beany,char *testing)
{
  int len=strlen(testing); 
  beany.str=new char[len+1];
  strcpy(beany.str,testing);
  beany.ct=len;
}
void show(const stringy &beany,int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<beany.str<<endl;
  }
}
void show(const char* testing,int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<testing<<endl;
  }
}
