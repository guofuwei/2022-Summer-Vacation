#include <iostream>

using namespace std;

struct Car
{
  string model;
  int year;
};

Car& UpdateYear(Car &car)
{
  car.year+=1;
  return car;
}

Car& CopyCar(const Car &car)
{
  Car* new_car=new Car;
  new_car->model=car.model;
  new_car->year=car.year;
  //Car new_car2;
  //return new_car2;
  return *new_car;
}

void ShowInfo(const Car &car)
{
  cout<<"model:"<<car.model<<endl;
  cout<<"year:"<<car.year<<endl;
}
 int main()
{
  Car car={
    "BMW"
  };
  ShowInfo(UpdateYear(car));
  ShowInfo(CopyCar(UpdateYear(car)));

  return 0;
}
