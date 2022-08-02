#ifndef __STUENTI_H__
#define __STUENTI_H__
#include <iostream>
#include <string>
#include <valarray>

class Student:private std::string,private std::valarray<double>
{
  private:
    typedef std::valarray<double> ArrayDb;
  public:
    Student():std::string("none"),ArrayDb(){}
    explicit Student(const std::string &s):std::string(s),ArrayDb(){}
    explicit Student(int num):std::string("none"),ArrayDb(num){}
    Student(const std::string &s,int num):std::string(s),ArrayDb(num){}
    Student(const std::string &s,const ArrayDb &arr_db):std::string(s),ArrayDb(arr_db){}
    Student(const std::string &s,const double* pd,int num):std::string(s),ArrayDb(pd,num){}
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
