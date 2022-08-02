#ifndef __STUENTC_H__
#define __STUENTC_H__
#include <iostream>
#include <string>
#include <valarray>

class Student
{
  private:
    typedef std::valarray<double> ArrayDb;
    std::string name_;
    ArrayDb scores_;
    std::ostream& arr_out(std::ostream &os) const;
  public:
    Student():name_("none"),scores_(){}
    explicit Student(const std::string &s):name_(s),scores_(){}
    explicit Student(int num):name_("none"),scores_(num){}
    Student(const std::string &s,int num):name_(s),scores_(num){}
    Student(const std::string &s,const ArrayDb &arr_db):name_(s),scores_(arr_db){}
    Student(const std::string &s,const double* pd,int num):name_(s),scores_(pd,num){}
    ~Student(){}
    double Average() const;
    const std::string& Name() const;
    double& operator[](int i);
    double operator[](int i) const;

    friend std::ostream& operator<<(std::ostream &os,const Student &stu);
    friend std::istream& operator>>(std::istream &is,Student &stu);
    friend std::istream& getline(std::istream &is,Student &stu);
};

#endif
