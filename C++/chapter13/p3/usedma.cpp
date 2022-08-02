#include "dma.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

const int kClients=2;
const int kMaxChar=100;

int main()
{
  AllBase* p_clients[kClients];
  char label[kMaxChar];
  int rating;
  char kind;
  for(int i=0;i<kClients;i++)
  {
    cout<<"Enter the label:";
    cin.getline(label,99);
    label[99]='\0';
    cout<<"Enter the rating:";
    cin>>rating;
    cout<<"Enter 1 for baseDMA,2 for lacksDMA,3 for hasDMA:";
    
    while(cin>>kind&&(kind!='1'&&kind!='2'&&kind!='3'))
    {
      cout<<"Try again.enter 1 or 2 or 3:";
    }
    //cout<<"Bingo"<<endl;
    if(kind=='1')
    {
      p_clients[i]=new baseDMA(label,rating);
    }
    else if(kind=='2')
    {
      char color[kMaxChar];
      cout<<"Enter the color:";
      cin.getline(color,99);
      color[99]='\0';
      p_clients[i]=new lacksDMA(label,rating,color);
    }
    else if(kind=='3')
    {
      char style[kMaxChar];
      cout<<"Enter the style:";
      cin.getline(style,99);
      style[99]='\0';
      p_clients[i]=new lacksDMA(label,rating,style);
    }
    while(cin.get()!='\n');
  }
  cout<<endl;
  for(int i=0;i<kClients;i++)
  {
    cout<<*p_clients[i];
    cout<<endl;
  }
  for(int i=0;i<kClients;i++)
  {
    delete p_clients[i];
  }
  cout<<"Done!"<<endl;

  return 0;
}
