#include "p1.h"

int main()
{
  Account test("hanshan","189278218928",10000);
  test.ShowValue();
  test.AddValue(100);
  test.ShowValue();
  test.DrawValue(1000000);
  test.ShowValue();
}
