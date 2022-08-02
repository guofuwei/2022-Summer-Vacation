#include "p4.h"
#include <iostream>

using std::cout;
using std::endl;
using std::strcpy;
using std::strlen;
using std::strncpy;

Port::Port(const char* brand, const char* style, int bottles)
{
  brand_ = new char[strlen(brand) + 1];
  strcpy(brand_, brand);
  strncpy(style_, style, 19);
  style_[19] = '\0';
  bottles_ = bottles;
}

Port::Port(const Port& port)
{
  delete[] brand_;
  brand_ = new char[strlen(port.brand_) + 1];
  strcpy(brand_, port.brand_);
  strcpy(style_, port.style_);
  bottles_ = port.bottles_;
}

Port::~Port()
{
  delete[] brand_;
}

Port& Port::operator=(const Port& port)
{
  if (&port == this)
    return *this;
  delete[] brand_;
  brand_ = new char[strlen(port.brand_) + 1];
  strcpy(brand_, port.brand_);
  strcpy(style_, port.style_);
  bottles_ = port.bottles_;
  return *this;
}

Port& Port::operator+=(int n)
{
  if (n < 0) {
    cout << "The num should be positive,add failed!" << endl;
    return *this;
  }
  cout << "Add successed!" << endl;
  bottles_ += n;
  return *this;
}

Port& Port::operator-=(int n)
{
  if (n < 0) {
    cout << "The num should be positive,sub failed!" << endl;
    return *this;
  } else if (n > bottles_) {
    cout << "You can't sub more than " << bottles_ << " bottles,sub failed!" << endl;
    return *this;
  }
  cout << "Sub successed!" << endl;
  bottles_ -= n;
  return *this;
}

void Port::Show()
{
  cout << "Brand: " << brand_ << endl;
  cout << "Kind: " << style_ << endl;
  cout << "Bottles: " << bottles_ << endl;
}

std::ostream& operator<<(std::ostream& os, const Port& port)
{
  os << port.brand_ << "," << port.style_ << "," << port.bottles_ << endl;
  return os;
}

VintagePort::VintagePort(const char* brand, const char* style, int bottles,
    const char* fullname, int year)
    : Port(brand, style, bottles)
{
  fullname_ = new char[strlen(fullname) + 1];
  strcpy(fullname_, fullname);
  year_ = year;
}

VintagePort::VintagePort(const Port& port, char* fullname, int year)
    : Port(port)
{
  fullname_ = new char[strlen(fullname) + 1];
  strcpy(fullname_, fullname);
  year_ = year;
}

VintagePort::VintagePort(const VintagePort& vport)
    : Port(vport)
{
  fullname_ = new char[strlen(vport.fullname_) + 1];
  strcpy(fullname_, vport.fullname_);
  year_ = vport.year_;
}

VintagePort::~VintagePort()
{
  delete[] fullname_;
}

VintagePort& VintagePort::operator=(const VintagePort& vport)
{
  if (&vport == this)
    return *this;
  Port::operator=(vport);
  delete[] fullname_;
  fullname_ = new char[strlen(vport.fullname_) + 1];
  strcpy(fullname_, vport.fullname_);
  year_ = vport.year_;
  return *this;
}

void VintagePort::Show()
{
  Port::Show();
  cout << "Fullname: " << fullname_ << endl;
  cout << "Year: " << year_ << endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vport)
{
  os << (const Port&)vport;
  cout << vport.fullname_ << "," << vport.year_ << endl;
  return os;
}
