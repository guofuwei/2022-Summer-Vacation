#include <iostream>
using namespace std;

struct Things
{
  char good[20];
  char bad[20];
  int date;
};

int main()
{
  Things* test_things=new Things;
  cout<<"Input the good thing:";
  cin.getline(test_things->good,20);

  cout<<"Input the date:";
  cin>>test_things->date;
  cin.get();

  cout<<"Input the bad thing:";
  cin.getline(test_things->bad,20);

  cout<<"good thing:"<<test_things->good<<endl;
  cout<<"bad thing:"<<test_things->bad<<endl;

  delete test_things;
  return 0;
}
