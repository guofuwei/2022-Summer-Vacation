#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdexcept>
#include <string>

using namespace std;

int main()
{
  ifstream input_file;
  string file_name;
  cout<<"Enter the file name:";
  getline(cin,file_name);
  input_file.open(file_name);
  if(!input_file.is_open())
  {
    cout<<"Can't open the file!"<<endl;
    exit(EXIT_FAILURE);
  }
  cout<<"open the file success!"<<endl;


  input_file.seekg(0,input_file.end);
  int length=input_file.tellg();
  char* data=new char[length];
  input_file.seekg(0,input_file.beg);
  input_file.read(data, length);
  if(input_file.eof())
  {
    cout<<"The file have reached end!"<<endl;
  }
  cout<<"The count of letter is "<<length<<endl;

  input_file.close();
  delete [] data;
  return 0;
}
