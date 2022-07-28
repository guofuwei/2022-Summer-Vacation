#include <iostream>
#include <array>

using namespace std;

int main()
{
  array<double,3> score;
  cout<<"Enter the first score:";
  cin>>score[0];
  cout<<"Enter the second score:";
  cin>>score[1];
  cout<<"Enter the third score:";
  cin>>score[2];
  cout<<"The avg of score is:"<<(score[0]+score[1]+score[2])/3<<endl;
  return 0;
}
