#include "stringbad.h"
#include <cstring>
#include <iostream>
#include <ostream>

using std::cout;
using std::endl;

int StringBad::num_strings_=0;


StringBad::StringBad()
{
  len_=4;
  str_=new char[4];
  std::strcpy(str_,"C++");
  num_strings_++;
  cout<<num_strings_<<":\""<<str_<<"\" default object created!"<<endl;
}

StringBad::StringBad(const char* s)
{
  len_=strlen(s);
  str_=new char[len_+1];
  std::strcpy(str_,s);
  num_strings_++;
  cout<<num_strings_<<":\""<<str_<<"\" object created!"<<endl;
}

StringBad::~StringBad()
{
  num_strings_--;
  cout<<"\""<<str_<<"\""<<" object deleted,"<<num_strings_<<" left"<<endl;
  delete [] str_;
}

std::ostream& operator<<(std::ostream &os,const StringBad &st)
{
  os<<st.str_;
  return os;
}
