#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
  string name;
  double diameter;
  double weight;
};

int main()
{
  Pizza test_pizza;
  Pizza* test_pizza2=new Pizza;
  cout<<"Enter the name of pizza:";
  getline(cin,test_pizza.name);
  cout<<"Enter the diameter of pizaa:";
  cin>>test_pizza.diameter;
  cout<<"Enter the weight of pizaa:";
  cin>>test_pizza.weight;
  return 0;
}
