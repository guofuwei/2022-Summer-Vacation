#include "stringbad.h"
#include <iostream>

using std::cout;
using std::endl;

void Callme1(const StringBad &st);
void Callme2(const StringBad st);


int main()
{
  cout<<"Start Program"<<endl;
  {

    StringBad headline1("I am headline 1");
    StringBad headline2("I am headline 2");
    StringBad sports("I am sports");

    cout<<"headline1:"<<headline1<<endl;
    cout<<"headline2:"<<headline2<<endl;
    cout<<"sports:"<<sports<<endl;

    Callme1(headline1);
    cout<<"headline1:"<<headline1<<endl;
    Callme2(headline2);
    cout<<"headline2:"<<headline2<<endl;

    cout<<"Initilaze one object to another"<<endl;
    StringBad test1=sports;
    cout<<"test1:"<<test1<<endl;

    cout<<"Assign one object to another"<<endl;
    StringBad test2;
    test2=headline1;
    cout<<"test2:"<<test2<<endl;

  }
  cout<<"End of Program"<<endl;
}

void Callme1(const StringBad &st)
{
  cout<<"Here is Callme1 String passed by reference"<<endl;
  cout<<"The string is \""<<st<<"\""<<endl;
}

void Callme2(const StringBad st)
{
  cout<<"Here is Callme2 String passed by value"<<endl;
  cout<<"The string is \""<<st<<"\""<<endl;
}

