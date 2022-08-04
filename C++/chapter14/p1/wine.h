#ifndef __WINE_H__
#define __WINE_H__
#include "pairs.h"
#include <valarray>
#include <string>

typedef  std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArrayInt;

class Wine
{
  private:
    std::string name_;
    PairArrayInt pair_array_;
  public:
    Wine(){}
    Wine(const char* name,int y,const int yr[],const int bot[]);
    Wine(const char* name,int y);
    int GetBottles();
    const std::string& Label();
    int sum();
    void Show() const;
};


#endif
