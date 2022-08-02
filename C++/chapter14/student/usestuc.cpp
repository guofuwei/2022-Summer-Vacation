#include "studentc.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

void Set(Student& stu, int n);

const int pupils = 3;
const int quizees = 5;

int main()
{
  Student ada[pupils] = {
    Student(quizees), Student(quizees), Student(quizees)
  };
  int i = 0;
  for (i = 0; i < pupils; i++) {
    Set(ada[i], quizees);
  }
  cout<<"\nStudent List:"<<endl;
  for(i=0;i<pupils;i++)
  {
    cout<<ada[i].Name()<<endl;
  }
  cout<<"\nResult:";
  for(i=0;i<pupils;i++)
  {
    cout<<endl<<ada[i];
    cout<<"Average: "<<ada[i].Average()<<endl;
  }
  cout<<"Done!"<<endl;
  return 0;
}

void Set(Student& stu, int n)
{
  cout<<"Please enter the student's name:";
  getline(cin,stu);
  cout<<"Please enter "<<n<<" quiz scores:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>stu[i];
  }
  while(cin.get()!='\n');
}
