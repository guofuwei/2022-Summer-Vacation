#include "dma.h"
#include <iostream>
#include <cstring>
#include <ostream>

using std::endl;
using std::cout;
using std::strlen;
using std::strcpy;

baseDMA::baseDMA(const char* label,int rating)
{
  label_=new char[strlen(label)+1];
  strcpy(label_,label);
  rating_=rating;
}

baseDMA::baseDMA(const baseDMA &bdma)
{
  label_=new char[strlen(bdma.label_)+1];
  strcpy(label_,bdma.label_);
  rating_=bdma.rating_;
}

baseDMA& baseDMA::operator=(const baseDMA &bdma)
{
  if(&bdma==this)return *this;
  delete [] label_;
  label_=new char[strlen(bdma.label_)+1];
  strcpy(label_,bdma.label_);
  rating_=bdma.rating_;
  return *this;
}

baseDMA::~baseDMA()
{
  delete [] label_;
}

std::ostream& operator<<(std::ostream &os,const baseDMA &bdma)
{
  os<<"Label: "<<bdma.label_<<endl;
  os<<"Rating: "<<bdma.rating_<<endl;
  return os;
}

lacksDMA::lacksDMA(const char* label,int rating,const char* color):baseDMA(label,rating)
{
  strcpy(color_,color);
}


lacksDMA::lacksDMA(const baseDMA &bdma,const char* color):baseDMA(bdma)
{
  strcpy(color_,color);
}

std::ostream& operator<<(std::ostream &os,const lacksDMA &ldma)
{
  os<<(const baseDMA&)ldma;
  os<<"Color: "<<ldma.color_<<endl;
  return os;
}

hasDMA::hasDMA(const char* label,int rating,const char* style):baseDMA(label,rating)
{
  style_=new char[strlen(style)+1];
  strcpy(style_,style);
}

hasDMA::hasDMA(const baseDMA &bdma,const char* style):baseDMA(bdma)
{
  style_=new char[strlen(style)+1];
  strcpy(style_,style);
}

hasDMA::hasDMA(const hasDMA &hdma):baseDMA(hdma)
{
  style_=new char[strlen(hdma.style_)+1];
  strcpy(style_,hdma.style_);
}

hasDMA& hasDMA::operator=(hasDMA &hdma)
{
  if(&hdma==this)return *this;
  delete [] style_;
  baseDMA::operator=(hdma);
  style_=new char[strlen(hdma.style_)+1];
  strcpy(style_,hdma.style_);
  return hdma;
}

hasDMA::~hasDMA()
{
  delete [] style_;
}

std::ostream& operator<<(std::ostream &os,const hasDMA &hdma)
{
  os<<(const baseDMA&)hdma;
  os<<"Style: "<<hdma.style_<<endl;
  return os;
}
