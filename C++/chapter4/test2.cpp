#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char first_name[20];
  char last_name[20];
  char name[50];
  cout<<"Enter your first name:";
  cin.getline(first_name,20);
  cout<<"Enter your last name:";
  cin.getline(last_name,20);
  cout<<"Here's the information in single string:"<<last_name<<", " <<first_name<<endl; 
  return 0;
}
