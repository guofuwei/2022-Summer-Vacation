#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string file_name;
  cout<<"Enter a file name:";
  getline(cin,file_name);
  ifstream in_file;
  in_file.open(file_name);
  if(!in_file.is_open())
  {
    cout<<"Could not open the file:"<<file_name<<endl;
    cout<<"The program terminating."<<endl;
    exit(EXIT_FAILURE);
  }
  cout<<"open the txt file success!"<<endl;
  
  double value;
  double sum=0;
  int count=0;
  in_file>>value;
  while(in_file.good())
  {
    sum+=value;
    count++;
    in_file>>value;
  }
  if(in_file.eof())
  {
    cout<<"End of file reached!"<<endl;
  }
  else if(in_file.fail())
  {
    cout<<"Input terminatd by data mismatched."<<endl;  
  }
  else
  {
    cout<<"Inut terminatd by unknown reason."<<endl;
  }
  if(count==0)
  {
    cout<<"No data readed"<<endl;
  }
  else
  {
    cout<<"data count:"<<count<<endl;
    cout<<"data sum:"<<sum<<endl;
    cout<<"data average:"<<sum/count<<endl;
  }

  in_file.close();
  return 0;
}
