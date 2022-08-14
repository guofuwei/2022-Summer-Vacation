#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>

using namespace std;
const int LIM=6;

void Show(double);

int main()
{
  double arr1[LIM] = {28, 29, 30, 35, 38, 59};
  double arr2[LIM] = {63, 65, 69, 75, 80, 99};
  vector<double> gr8(arr1,arr1+LIM);
  vector<double> m8(arr2,arr2+LIM);

  vector<double> sum(LIM);
  transform(gr8.begin(),gr8.end(),m8.begin(),sum.begin(),plus<double>());
  for_each(sum.begin(),sum.end(),Show);
  cout<<endl;

  vector<double> prod(LIM);
  transform(gr8.begin(),gr8.end(),prod.begin(),bind1st(multiplies<double>(),2.5));
  for_each(prod.begin(),prod.end(),Show);
  cout<<endl;
}


void Show(double n)
{
  cout<<n<<" ";
}
