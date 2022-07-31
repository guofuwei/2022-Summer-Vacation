#include "p1.h"
#include <iostream>


int main()
{
  Cow cow1;
  Cow cow2("bob","listen to music",200);
  Cow cow3=cow2;
  cow1=cow2;

  cow1.ShowCow();
  cow2.ShowCow();
  cow3.ShowCow();
}
