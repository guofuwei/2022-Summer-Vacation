#ifndef __P4_H__
#define __P4_H__

namespace SALES 
{
  const int QUARTERS=4;
  struct Sales
  {
    double sales[QUARTERS];
    double average;
    double min;
    double max;
  };
  void setSales(Sales &s,const double ar[],int n);
  void setSales(Sales &s);
  void showSales(const Sales &s);
}
#endif
