#include <iostream>
#include <string>

using namespace std;

int main()
{
  string last_name,first_name;
  char grade;
  int age;
  cout<<"What is your first name?";
  getline(cin,first_name);
  cout<<"What is your last name?";
  getline(cin,last_name);
  cout<<"What letter Grade do you deserve?";
  grade=cin.get();
  cout<<"what is your age?";
  cin>>age;
  cout<<"Name:"<<last_name<<","<<first_name<<endl;
  cout<<"Grade:"<<char(grade+1)<<endl;
  cout<<"Age:"<<age<<endl;
  return 0;
}
