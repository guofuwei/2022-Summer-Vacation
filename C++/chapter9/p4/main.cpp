#include "p4.h"
#include <iostream>



int main()
{
  using namespace SALES;
  Sales sale_test1;
  const double arr[]={10.2,11.4,9.8,9.5};
  setSales(sale_test1,arr,4);
  showSales(sale_test1);
  Sales sale_test2;
  setSales(sale_test2);
  showSales(sale_test2);

  return 0;
}
