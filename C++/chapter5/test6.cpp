#include <iostream>
#include <string>

using namespace std;

struct Car
{
  string manufacturer;
  int year;
};
int main()
{
  int num;
  cout<<"How many car do you wish to catalog:";
  cin>>num;
  cin.get();
//  cin.get(num);
  Car* guest_cars=new Car [num];
  for(int i=0;i<num;i++)
  {
    cout<<"Car #"<<i+1<<endl;
    cout<<"Please enter the make:";
    getline(cin,guest_cars[i].manufacturer);
    cout<<"Please enter the year made:";
    cin>>guest_cars[i].year;
    cin.get();
  }
  cout<<"Here is your collection:"<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<guest_cars[i].year<<" "<<guest_cars[i].manufacturer<<endl;
  }
}
