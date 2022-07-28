#include <iostream>
using namespace std;

int tom=3;
int dick=30;
static int harry=300;

void RemoteReport();

int main()
{
  cout<<"&tom="<<&tom<<endl;
  cout<<"&dick="<<&dick<<endl;
  cout<<"&harry="<<&harry<<endl;
  RemoteReport(); 
  return 0;
}
