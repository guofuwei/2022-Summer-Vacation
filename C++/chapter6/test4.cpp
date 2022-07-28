#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
  int count=0;
  char ch;
  ifstream input_file;
  input_file.open("test.txt");
  if(!input_file.is_open())
  {
    cout<<"Can't open the file!"<<endl;
    exit(EXIT_FAILURE);
  }
  cout<<"open the file success!"<<endl;
  input_file.get(ch);
  while(!input_file.eof())
  {
    count++;
    cout<<ch;
    input_file.get(ch);
  }
  if(input_file.eof())
  {
    cout<<"The file have reached end!"<<endl;
  }
//  else if(input_file.fail())
//  {
//    cout<<"The file have reached end!"<<endl;
//  }
//  else
//  {
//    cout<<"Unknown reason happened!"<<endl;
//  }
  cout<<"The count of letter is "<<count<<endl;
}
