#include "stcktp1.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int kNum = 10;

int main()
{
  std::srand(std::time(0));
  cout << "Please enter stack size:";
  int stacksize;
  cin >> stacksize;
  Stack<const char*> st(stacksize);

  const char* in[kNum] = {
    "1: Hank Gilgamesh", "2: Kiki Ishtar",
    "3: Betty Rocker", "4: Ian Flagranti",
    "5: Wolfgang Kibble", "6: Portia Koop",
    "7: Joy Almondo", "8: Xaverie Paprika",
    "9: Juan Moore", "10: Misha Mache"
  };
  const char* out[kNum];

  int processed = 0;
  int nextin = 0;
  while (processed < kNum) {
    if (st.isempty())
      st.push(in[nextin++]);
    else if (st.isfull())
      st.pop(out[processed++]);
    else if (std::rand() % 2 && nextin < kNum)
      st.push(in[nextin++]);
    else
      st.pop(out[processed++]);
  }
  for(int i=0;i<kNum;i++)
    cout<<out[i]<<endl;
  cout<<"Bye!"<<endl;
  return 0;
}
