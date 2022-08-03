#include "workermi.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Woker methods
Worker::~Worker() { }

void Worker::Get()
{
  cout << "Enter the worker's name:";
  getline(cin, fullname_);
  cout << "Enter worker's id:";
  cin >> id_;
  while (cin.get() != '\n')
    ;
}

void Worker::Set()
{
  Get();
}

void Worker::Data() const
{
  cout << "Name: " << fullname_ << endl;
  cout << "ID: " << id_ << endl;
}

void Worker::Show() const
{
  cout << "Category worker" << endl;
  Data();
}

// Waiter methods
void Waiter::Get()
{
  cout << "Enter waiter's rating:";
  cin >> panache_;
  while (cin.get() != '\n')
    ;
}

void Waiter::Set()
{
  Worker::Get();
  Waiter::Get(); 
}

void Waiter::Data() const
{
  cout << "Panache: " << panache_ << endl;
}

void Waiter::Show() const
{
  cout << "Category waiter" << endl;
  Worker::Data();
  Waiter::Data();
}

// Singer methods
std::string Singer::pv_[] = {
  "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"
};

void Singer::Get()
{
  cout << "Enter singer's voice range" << endl;
  int i;
  for (i = 0; i < vType; i++) {
    cout << i << ":" << pv_[i] << "\t";
    if (i % 4 == 3)
      cout << endl;
  }
  if (i % 4 != 0)
    cout << endl;
  cout << "Enter at here:";
  while (cin >> voice_ && (voice_ < 0 || voice_ >= vType)) {
    cout << "Please enter a value>=0 and <" << vType << endl;
    cout << "Try again:";
  }
  while (cin.get() != '\n')
    ;
}

void Singer::Set()
{
  Worker::Get();
  Singer::Get();
}

void Singer::Data() const
{
  cout << "Voice range: " <<pv_[voice_]<< endl;
}

void Singer::Show() const
{
  cout << "Category singer" << endl;
  Worker::Data();
  Singer::Data();
}

// SingerWaiter methods
void SingerWaiter::Data() const
{
  Waiter::Data();
  Singer::Data();
}

void SingerWaiter::Get()
{
  Waiter::Get();
  Singer::Get();
}

void SingerWaiter::Set()
{
  Worker::Get();
  Get();
}

void SingerWaiter::Show() const
{
  cout<<"Category: singer waiter"<<endl;
  Worker::Data();
  SingerWaiter::Data();
}
