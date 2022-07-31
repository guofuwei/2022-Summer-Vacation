#include "string2.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
//using std::cin;
//using std::cout;
//using std::endl;
using std::istream;
using std::ostream;
using std::strlen;
using std::strcpy;
using std::strcmp;

int String::num_strings_=0;

String::String()
{
  len_=0;
  str_=nullptr;
  num_strings_++;
}

String::String(const char* str)
{
  len_ =std::strlen(str);
  str_=new char[len_+1];
  strcpy(str_,str);
  num_strings_++;
}

String::String(const String &mystr)
{
  len_=mystr.len_;
  str_=new char[len_+1];
  strcpy(str_,mystr.str_);
  num_strings_++;
}

String::~String()
{
  num_strings_--;
  delete [] str_;
}

String& String::operator=(const char* str)
{
  len_=strlen(str);
  delete [] str_;
  str_=new char[len_+1];
  strcpy(str_,str);
  return *this;
}

String& String::operator=(const String &mystr)
{
  if(&mystr==this)
  {
    return *this;
  }
  len_=strlen(mystr.str_);
  delete [] str_;
  str_=new char[len_+1];
  strcpy(str_,mystr.str_);
  return *this;
}

char& String::operator[](int n)
{
  return str_[n];
}

const char& String::operator[](int n) const
{
  return str_[n];
}

void String::Stringlow()
{
  for(int i=0;i<len_;i++)
  {
    str_[i]=std::tolower(str_[i]);
  }
}

void String::Stringupper()
{
  for(int i=0;i<len_;i++)
  {
    str_[i]=std::toupper(str_[i]);
  }
}

int String::countchar(char ch) const
{
  int count=0;
  for(int i=0;i<len_;i++)
  {
    if(str_[i]==ch)count++;
  }
  return count;
}

String operator+(const String &s1,const String &s2)
{
  String new_str;
  new_str.len_=s1.len_+s2.len_;
  new_str.str_=new char[new_str.len_+1];
  strcpy(new_str.str_,s1.str_);
  strcat(new_str.str_,s2.str_);
  return new_str;
}

bool operator>(const String &s1,const String &s2)
{
  if(strcmp(s1.str_,s2.str_ )>0)
  {
    return true;
  }
    return false;
}

bool operator<(const String &s1,const String &s2)
{
  return s2>s1;
}

bool operator==(const String &s1,const String &s2)
{
  if(strcmp(s1.str_,s2.str_)==0)
  {
    return true;
  }
  return false;
}

ostream& operator<<(ostream &os,const String &mystr)
{
  os<<mystr.str_;
  return os;
}

istream& operator>>(istream &is,String &mystr)
{
  char tmp[String::CINLIM];
  is.get(tmp,String::CINLIM);
  if(is)
  {
    mystr=tmp;
  }
  while(is&&is.get()!='\n');
  return is;
}
