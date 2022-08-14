#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


using std::cout;
using std::endl;
using std::list;


template <typename T>
class TooBig
{
  private:
    T cutoff_;
  public:
    TooBig(const T& t){cutoff_=t;}
    bool operator()(const T& t){return t>cutoff_;}
};

inline void outint(int n){std::cout<<n<<" ";}

int main()
{
  TooBig<int> f100(100);
  int vals[10]={50,100,90,180,60,210,415,88,188,201};
  list<int> yadayada(vals,vals+10);
  list<int> etcetera(vals,vals+10);

  cout<<"Original List: "<<endl;
  for_each(yadayada.begin(),yadayada.end(),outint);
  cout<<endl;
  for_each(etcetera.begin(),etcetera.end(),outint);
  cout<<endl;

  yadayada.remove_if(f100);
  etcetera.remove_if(TooBig<int>(200));
  cout<<"Trimmed lists:"<<endl;
  for_each(yadayada.begin(),yadayada.end(),outint);
  cout<<endl;
  for_each(etcetera.begin(),etcetera.end(),outint);
  cout<<endl;

  return 0;
}

