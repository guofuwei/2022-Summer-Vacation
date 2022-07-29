#ifndef __STRINGBAD_H__
#define __STRINGBAD_H__
#include <iostream>

class StringBad
{
  private:
    char* str_;
    int len_;
    static int num_strings_;
  public:
    StringBad();
    StringBad(const char* s);
    ~StringBad();
    friend std::ostream& operator<<(std::ostream &os,const StringBad &str);
};

#endif
