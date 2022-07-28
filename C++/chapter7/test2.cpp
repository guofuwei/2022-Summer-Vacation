#include <iostream>
#include <limits>

using namespace std;

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void PrintBox(box test_box);
void CalVolume(box* p_test_box);

int main()
{
  box test_box={
    "BMW",
    4.2,
    3.4,
    2.5,
  };
  CalVolume(&test_box);
  PrintBox(test_box);
}




void PrintBox(box test_box)
{
  cout<<"Box maker:"<<test_box.maker<<endl;
  cout<<"Box height:"<<test_box.height<<endl;
  cout<<"Box width:"<<test_box.width<<endl;
  cout<<"box length:"<<test_box.length<<endl;
  cout<<"box volume:"<<test_box.volume<<endl;
}
void CalVolume(box* p_test_box)
{
  p_test_box->volume=p_test_box->height*p_test_box->length*p_test_box->width;
}
