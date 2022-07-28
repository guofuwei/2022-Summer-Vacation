#include <iostream>

using namespace std;

double warning=0.3;
void Update(double dt);
void Local();

int main()
{
  cout<<"In main.cpp global warning is "<<warning<<endl;
  Update(0.1);
  cout<<"After update"<<endl;
  cout<<"In main.cpp global warning is "<<warning<<endl;
  Local();
  cout<<"After local"<<endl;
  cout<<"In main.cpp global warning is "<<warning<<endl;

  return 0;
}

