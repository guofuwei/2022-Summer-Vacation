#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

typedef int KeyType;
typedef std::pair<const KeyType, string> Pair;
typedef multimap<KeyType, string> MapCode;

int main()
{
  MapCode codes;
  codes.insert(Pair(415, "San Francisco"));
  codes.insert(Pair(510, "Oakland"));
  codes.insert(Pair(718, "Brooklyn"));
  codes.insert(Pair(718, "Staten Island"));
  codes.insert(Pair(415, "San Rafael"));
  codes.insert(Pair(510, "Berkeley"));
  cout << "Number of cities with area code 415: "
       << codes.count(415) << endl;
  cout << "Number of cities with area code 718: "
       << codes.count(718) << endl;
  cout << "Number of cities with area code 510: "
       << codes.count(510) << endl;
  cout << "Area Code City\n";
  MapCode::iterator it;
  for(it=codes.begin();it!=codes.end();++it)
  {
    cout << "\t" << (*it).first << "\t" << (*it).second << endl;
  }

  std::pair<MapCode::iterator,MapCode::iterator> range=codes.equal_range(718);
  cout<<"Cites with area code 718:"<<endl;
  for(it=range.first;it!=range.second;it++)
  {
    cout<<(*it).second<<endl;
  }

  return 0;
}
