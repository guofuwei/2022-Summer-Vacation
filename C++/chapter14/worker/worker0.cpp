#include "worker0.h"
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
  //cout << "Category worker" << endl;
  cout << "Name: " << fullname_ << endl;
  cout << "ID: " << id_ << endl;
}

// Waiter methods
void Waiter::Set()
{
  Worker::Set();
  cout << "Enter waiter's rating:";
  cin >> panache_;
  while (cin.get() != '\n')
    ;
}

void Waiter::Show() const
{
  cout << "Category waiter" << endl;
  Worker::Show();
  cout << "Panache: " << panache_ << endl;
}

// Singer methods
std::string Singer::pv_[] = {
  "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"
};

void Singer::Set()
{
  Worker::Set();
  cout << "Enter singer's voice range"<<endl;
  int i;
  for (i = 0; i < vType; i++) {
    cout << i << ":" << pv_[i] << "\t";
    if (i % 4 == 3)
      cout << endl;
  }
  if (i % 4 != 0)
    cout << endl;
  cout<<"Enter at here:";
  while (cin >> voice_ && (voice_ < 0 || voice_ >= vType)) {
    cout << "Please enter a value>=0 and <" << vType << endl;
    cout << "Try again:";
  }
  while (cin.get() != '\n')
    ;
}

void Singer::Show() const
{
  cout << "Category singer" << endl;
  Worker::Show();
  cout << "Voice range: " << voice_ << endl;
}
