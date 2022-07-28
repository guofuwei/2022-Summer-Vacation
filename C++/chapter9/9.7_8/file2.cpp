#include <iostream>

using namespace std;

extern int tom;
static int dick=40;
int harry=400;
void RemoteReport()
{
  cout<<"Now we are in remote report."<<endl;
  cout<<"&tom="<<&tom<<endl;
  cout<<"&dick="<<&dick<<endl;
  cout<<"&harry="<<&harry<<endl; 
}
