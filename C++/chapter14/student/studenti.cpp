#include "studenti.h"
#include <iostream>

using std::cout;
using std::endl;
// using std::cin;

double Student::Average() const
{
  if (ArrayDb::size() > 0) {
    return ArrayDb::sum() / ArrayDb::size();
  }
  return 0;
}

const std::string& Student::Name() const
{
  return (const std::string&)*this;
}

double& Student::operator[](int i)
{
  return ArrayDb::operator[](i);
}

double Student::operator[](int i) const
{
  return ArrayDb::operator[](i);
}

std::ostream& operator<<(std::ostream& os, const Student& stu)
{
  os << "Name: " << (const std::string&)stu << endl;
  if (stu.ArrayDb::size() == 0) {
    cout << "Empty scores" << endl;
    return os;
  }
  os << "Scores: ";
  for (int i = 0; i < stu.ArrayDb::size(); i++) {
    os << stu.operator[](i) << " ";
  }
  cout << endl;
  return os;
}

std::istream& operator>>(std::istream& is, Student& stu)
{
  is >> (std::string&)stu;
  return is;
}
std::istream& getline(std::istream& is, Student& stu)
{
  getline(is, (std::string&)stu);
  return is;
}
