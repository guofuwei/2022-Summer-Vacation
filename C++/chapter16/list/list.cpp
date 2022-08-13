#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

using std::cout;
using std::endl;
using std::list;

inline void outint(int n) { cout << n << " "; }

int main()
{
  list<int> one(5, 2);
  int stuff[5] = { 1, 2, 4, 8, 6 };
  list<int> two;
  two.insert(two.begin(), stuff, stuff + 5);
  int more[6] = { 6, 4, 2, 4, 6, 5 };
  list<int> three(two);
  three.insert(three.end(), more, more + 6);

  cout << "List one:";
  for_each(one.begin(), one.end(), outint);
  cout << endl;

  cout << "List two:";
  for_each(two.begin(), two.end(), outint);
  cout << endl;

  cout << "List three:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  three.remove(2);
  cout << "List three minus 2s:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  three.splice(three.begin(), one);
  cout << "List three after splice:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  cout << "List one:";
  for_each(one.begin(), one.end(), outint);
  cout << endl;

  three.unique();
  cout << "List three after unique:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  three.sort();
  three.unique();
  cout << "List three after sort && unique:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  two.sort();
  three.merge(two);
  cout << "Sorted two merged into three:";
  for_each(three.begin(), three.end(), outint);
  cout << endl;

  return 0;
}
