#ifndef __WINE_H__
#define __WINE_H__
#include "pairs.h"
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
// typedef Pair<ArrayInt, ArrayInt> PairArrayInt;
class Wine : private Pair<ArrayInt, ArrayInt>,private std::string 
{
  public:
  Wine(){ }
  Wine(const char* name, int y, const int yr[], const int bot[]);
  Wine(const char* name, int y);
  int GetBottles();
  const std::string& Label();
  int sum();
  void Show() const;
};

#endif
