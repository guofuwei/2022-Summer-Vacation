#include "tv.h"
#include <iostream>

using std::cout;
using std::endl;
// using std::cin;

int main()
{
  Tv s42;
  cout << "Initial settings for 42\"TV:" << endl;
  s42.settings();
  s42.onoff();
  s42.chanup();
  cout <<endl<< "Adjusted settings for 42\"TV:" << endl;
  s42.settings();

  Remote grey;
  grey.set_chan(s42, 10);
  grey.volup(s42);
  grey.volup(s42);
  cout <<endl<< "Adjusted settings for 42\"TV using remote:" << endl;
  s42.settings();

  Tv s58(Tv::ON);
  s58.set_mode();
  grey.set_chan(s58, 28);
  cout <<endl<< "settings for 58\"TV using remote:" << endl;
  s58.settings();
  
  return 0;
}
