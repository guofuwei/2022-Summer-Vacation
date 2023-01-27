#include <algorithm>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool boot(const string& s);

int main()
{
  string tmp;
  cout << "Enter a string(q to quit):";
  while (cin >> tmp && tmp != "q") {
    int ret = boot(tmp);
    if (ret) {
      cout << "You enter a parindrome string!" << endl;
    } else {
      cout << "You enter a not parindrome string!" << endl;
    }
    cout << "Enter a string(q to quit):";
  }
}

bool boot(const string& s)
{
  string sr(s.rbegin(), s.rend());
  return sr == s;
}
