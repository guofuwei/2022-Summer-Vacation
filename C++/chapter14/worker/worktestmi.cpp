#include "workermi.h"
#include <cstddef>
#include <cstring>
#include <iostream>

const int kSize = 2;

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Worker* lolas[kSize];
  int ct;
  for (ct = 0; ct < kSize; ct++) {
    char choice;
    cout << "Enter the employee category" << endl;
    cout << "w: waiter\ts: singer\tt: singerwaiter\tq: quit" << endl;
    while (cin >> choice && strchr("wstq", choice) == NULL) {
      cout << "Pleae enter w s t or q:";
    }
    while (cin.get() != '\n')
      ;
    if (choice == 'q')
      break;
    switch (choice) {
    case 'w':
      lolas[ct] = new Waiter;
      break;
    case 's':
      lolas[ct] = new Singer;
      break;
    case 't':
      lolas[ct] = new SingerWaiter;
      break;
    }
    lolas[ct]->Set();
  }

  cout << endl
       << "Here is your staff" << endl;
  int i;
  for (i = 0; i < ct; i++) {
    cout << endl;
    lolas[i]->Show();
  }
  for(i=0;i<ct;i++)
  {
    delete lolas[i];
  }
  cout << "Bye!" << endl;
  return 0;
}
