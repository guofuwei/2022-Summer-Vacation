#include <ios>
#include <iostream>
#include "queue.h"
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;

const int MIN_PER_HR=60;

bool newcustomer(double x);

int main()
{
  std::srand(time(0));
  cout<<"Case Study:Bank of Heather Automatic teller"<<endl;
  cout<<"Enter the max size of queue:";
  int qs;
  cin>>qs;
  Queue line(qs);

  cout<<"Enter the number of simulation hours:";
  int hours;
  cin>>hours;
  long cyclelimit=hours*MIN_PER_HR;

  cout<<"Enter the average number of customers per hour:";
  double perhour;
  cin>>perhour;
  double be_min_per_com=MIN_PER_HR/perhour;

  Item temp;
  long turnaway=0;
  long customers=0;
  long serverd=0;
  long sum_line=0;
  int wait_time=0;
  long line_wait=0;
  //int count=0;

  //cout<<"cyclelimit:"<<cyclelimit<<endl;
  for(int cycle=0;cycle<cyclelimit;cycle++)
  {
    if(newcustomer(be_min_per_com))
    {
      //count++;
      //cout<<"bingo !"<<endl;
      if(line.isfull())
      {
        turnaway++;
      }
      else
      {
        customers++;
        temp.set(cycle);
        //cout<<"I am here"<<endl;
        line.enqueue(temp);
      }
      //cout<<"bingo! two"<<endl;
    }
    if(wait_time<=0&&!line.isempty())
    {
      //cout<<line.queuecount()<<endl;
      line.dequeue(temp);
      wait_time=temp.ptime();
      //cout<<wait_time<<endl;
      line_wait+=cycle-temp.when();
      serverd++;
    }
    if(wait_time>0)
    {
      wait_time--;
    }
    sum_line+=line.queuecount();
    //cout<<"cycle:"<<cycle<<endl;
  }
  // reporting results
  if(customers>0)
  {
    //cout<<"count:"<<count<<endl;
    cout<<"customer accepted "<<customers<<endl;
    cout<<"customers served "<<serverd<<endl;
    cout<<"customers turnaway "<<turnaway<<endl;
    cout<<"Average queue size:";
    cout.precision(2);
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<(double)sum_line/cyclelimit<<endl;
    cout<<"Average wait time:"<<(double)line_wait/serverd<<" minutes"<<endl;
  }
  else
  {
    cout<<"No customer"<<endl;
  }
  cout<<"Done!"<<endl;
  return 0;
}

bool newcustomer(double x)
{
  return (std::rand()*x/RAND_MAX<1);
}
