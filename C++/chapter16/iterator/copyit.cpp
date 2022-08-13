#include <iostream>
#include <iterator>
#include <vector>

//using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  int casts[10]={6,7,2,9,4,11,8,7,10,5};
  vector<int> dice(10);

  copy(casts,casts+10,dice.begin());
  cout<<"let's the dice be cast!"<<endl;

  std::ostream_iterator<int,char> out_iter(cout," ");
  copy(dice.begin(),dice.end(),out_iter);
  cout<<endl;

  cout<<"Implicit use reverse iterator."<<endl;
  copy(dice.rbegin(),dice.rend(),out_iter);
  cout<<endl;

  cout<<"Explicit use of reverse iterator."<<endl;
  vector<int>::reverse_iterator ri;
  for(ri=dice.rbegin();ri!=dice.rend();ri++)
  {
    cout<<*ri<<" ";
  }
  cout<<endl;

  return 0;
}
