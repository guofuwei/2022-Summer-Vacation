#include "stacktp.h"
#include <cctype>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Stack<std::string> stack;
  std::string po;
  char ch;
  cout << "Please enter a A to add a purchase order,"
       << "P to pop,Q to quit:";
  while (cin >> ch && toupper(ch) != 'Q') {
    while (cin.get() != '\n')
      continue;
    if (!isalpha(ch)) {
      // cout<<'\a';
      cout << "Please enter again:";
      continue;
    }
    switch (ch) {
    case 'a':
    case 'A':
      cout << "Enter a PO to push:";
      //cin >> po;
      getline(cin,po);
      if (stack.isfull()) {
        cout << "Push failed! stack is already full!" << endl;
      } else {
        stack.push(po);
      }
      break;
    case 'p':
    case 'P':
      if (stack.isempty()) {
        cout << "Pull failed! stack is already empty!" << endl;
      } else {
        stack.pop(po);
        cout << "PO #" << po << " poped!" << endl;
      }
      break;
    }
    cout << "Please enter a A to add a purchase order,"
         << "P to pop,Q to quit:";
  }
  cout << "Bye\n";
  return 0;
}
