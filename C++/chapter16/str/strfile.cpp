#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{
  ifstream fin("./tobuy.txt");
  if(fin.is_open()==false)
  {
    std::cerr<<"Can't open the file,Bye"<<endl;
    exit(EXIT_FAILURE);
  }
  string item;
  int count=0;
  getline(fin,item,':');
  while(fin)
  {
    ++count;
    cout<<count<<":"<<item<<endl;
    getline(fin,item,':');
  }
  cout<<"Done!"<<endl;
  fin.close();
  return 0;
}
