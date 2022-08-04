#include "worker.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Woker methods
void Worker::Set()
{
  cout << "Enter the worker's name:";
  getline(cin, fullname_);
  cout << "Enter worker's id:";
  cin >> id_;
  while (cin.get() != '\n')
    ;
}

void Worker::Show() const
{
  cout << "Category worker" << endl;
  cout << "Name: " << fullname_ << endl;
  cout << "ID: " << id_ << endl;
}

