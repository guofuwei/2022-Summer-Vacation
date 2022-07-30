#ifndef __STRING1_H__
#define __STRING1_H__

#include <iostream>

class String
{
  private:
    char *str_;
    int len_;
    static int num_strings_;
    static const int CINLIM=80;
  public:
    String();
    String(const char* str);
    String(const String &mystr);
    ~String();
    int length(){return len_;}

    String& operator=(const char* str);
    String& operator=(const String &mystr);
    char& operator[](int n);
    const char& operator[](int n) const;
    
    friend bool operator>(const String &s1,const String &s2);
    friend bool operator<(const String &s1,const String &s2);
    friend bool operator==(const String &s1,const String &s2);
    friend std::ostream& operator<<(std::ostream &os,const String &mystr);
    friend std::istream& operator>>(std::istream &is,String &mystr);

    static int HowMany(){return num_strings_;}
};
#endif
