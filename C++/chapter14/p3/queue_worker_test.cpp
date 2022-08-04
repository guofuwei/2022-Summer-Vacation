#include "queue.h"
#include "worker.h"
#include <cctype>
#include <iostream>

//using std::cin;
using std::cout;
//using std::endl;

int main()
{
  Queue<Worker> queue;
  char ch;
  Worker array_worker[3] = {
    Worker("Mike", 1001), Worker("Bob", 1002), Worker("Hanmeimei", 1003)
  };
  Worker* pop_worker;
  //for(int i=0;i<3;i++)
  //{
  //  pop_worker=&array_worker[i];
  //  cout<<"Worker #"<<i+1<<":"<<pop_worker<<std::endl;
  //  //pop_worker->Show();
  //}
  for(int i=0;i<3;i++)
  {
    queue.enqueue(&array_worker[i]);
  }
  for(int i=0;i<3;i++)
  {
    //pop_worker=queue.dequeue();
    queue.dequeue(pop_worker);
    //cout<<"pop_worker: "<<pop_worker<<std::endl;
    pop_worker->Show();
  }
  cout << "Bye\n";
  return 0;
}
