#include "dma.h"
#include <iostream>
#include <cstring>
#include <ostream>

using std::endl;
using std::cout;
using std::strlen;
using std::strcpy;

AllBase::AllBase(const char* label,int rating)
{
  label_=new char[strlen(label)+1];
  strcpy(label_,label);
  rating_=rating;
}

AllBase::AllBase(const AllBase &all_base)
{
  label_=new char[strlen(all_base.label_)+1];
  strcpy(label_,all_base.label_);
  rating_=all_base.rating_;
}

AllBase& AllBase::operator=(const AllBase &all_base)
{
  if(&all_base==this)return *this;
  delete [] label_;
  label_=new char[strlen(all_base.label_)+1];
  strcpy(label_,all_base.label_);
  rating_=all_base.rating_;
  return *this;
}

AllBase::~AllBase()
{
  delete [] label_;
}

std::ostream& operator<<(std::ostream &os,const AllBase &all_base)
{
  os<<"Label: "<<all_base.label_<<endl;
  os<<"Rating: "<<all_base.rating_<<endl;
  return os;
}

std::ostream& operator<<(std::ostream &os,const baseDMA &bdma)
{
  os<<(const AllBase&)bdma;
  return os;
}

lacksDMA::lacksDMA(const char* label,int rating,const char* color):AllBase(label,rating)
{
  strcpy(color_,color);
}


lacksDMA::lacksDMA(const AllBase &all_base,const char* color):AllBase(all_base)
{
  strcpy(color_,color);
}

std::ostream& operator<<(std::ostream &os,const lacksDMA &ldma)
{
  os<<(const AllBase&)ldma;
  os<<"Color: "<<ldma.color_<<endl;
  return os;
}

hasDMA::hasDMA(const char* label,int rating,const char* style):AllBase(label,rating)
{
  style_=new char[strlen(style)+1];
  strcpy(style_,style);
}

hasDMA::hasDMA(const AllBase &all_base,const char* style):AllBase(all_base)
{
  style_=new char[strlen(style)+1];
  strcpy(style_,style);
}

hasDMA::hasDMA(const hasDMA &hdma):AllBase(hdma)
{
  style_=new char[strlen(hdma.style_)+1];
  strcpy(style_,hdma.style_);
}

hasDMA& hasDMA::operator=(const hasDMA &hdma)
{
  if(&hdma==this)return *this;
  delete [] style_;
  AllBase::operator=(hdma);
  style_=new char[strlen(hdma.style_)+1];
  strcpy(style_,hdma.style_);
  return *this;
}

hasDMA::~hasDMA()
{
  delete [] style_;
}

std::ostream& operator<<(std::ostream &os,const hasDMA &hdma)
{
  os<<(const AllBase&)hdma;
  os<<"Style: "<<hdma.style_<<endl;
  return os;
}
