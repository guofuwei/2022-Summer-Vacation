#include "queuetp.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  QueueTP<std::string> cs(5);
  std::string temp;
  while (!cs.isfull()) {
    cout << "Enter your name.You wiil be served in the order of arrival:\nname";
    getline(cin, temp);
    cs.enqueue(temp);
  }
  cout << "Queue is full.Procesing is begins!" << endl;

  while (!cs.isempty()) {
    cs.dequeue(temp);
    cout << "Now processing: " << temp << endl;
  }
  return 0;
}
