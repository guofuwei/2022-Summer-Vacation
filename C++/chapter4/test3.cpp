#include <iostream>

using namespace std;

struct CandyBar
{
  string branch;
  double weight;
  int energy;
};

int main()
{
  CandyBar snack={
    "Mocha Munch",
    2.3,
    350
  };
  cout<<"snack.branch:"<<snack.branch<<endl;
  cout<<"snack.weight:"<<snack.weight<<endl;
  cout<<"snack.energy:"<<snack.energy<<endl;
  CandyBar candys[2]={
    {},
    {}
  };
  return 0;
}
