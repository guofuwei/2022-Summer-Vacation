#include <iostream>

using namespace std;

struct chaff
{
  char dross[20];
  int slag;
};

const int BUF=512;
char buffer[BUF];

void SetChaff(chaff* arr);
void ShowChaff(const chaff* arr);

int main()
{
  chaff* chaff_arr=new(buffer) chaff[2];
  SetChaff(chaff_arr);
  ShowChaff(chaff_arr);
}

void SetChaff(chaff* arr)
{
  for(int i=0;i<2;i++)
  {
    cout<<"Enter the dross:";
    cin.getline(arr[i].dross,20);
    cout<<"Enter the slag:";
    cin>>arr[i].slag;
    cin.get();
  }
}
void ShowChaff(const chaff* arr)
{
  const string rate[2]={"first","second"};
  for(int i=0;i<2;i++)
  {
    cout<<"The "<<rate[i]<<" element dross:"<<arr[i].dross<<endl;
    cout<<"The "<<rate[i]<<" element slag:"<<arr[i].slag<<endl;
  }
}
