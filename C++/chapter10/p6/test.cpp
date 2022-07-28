#include "p6.h"


int main()
{
  Move test1(1,2);
  Move test2(3,2);
  test1.showmove();
  Move test3=test1.add(test2);
  test3.showmove();
}
