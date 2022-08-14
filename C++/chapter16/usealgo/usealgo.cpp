#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

inline char toLower(char ch){return tolower(ch);}

string& ToLower(string &s);
void display(const string &s);


int main()
{
  vector<string> words;
  string input;
  cout<<"Enter the words(q to quit):";
  while(cin>>input&&input!="quit")
  {
    words.push_back(input);
  }

  cout<<"You entered the follow words:"<<endl;
  for_each(words.begin(),words.end(),display);
  cout<<endl;
  
  set<string> wordset;
  transform(words.begin(),words.end(),insert_iterator<set<string> >(wordset,wordset.begin()),ToLower);
  cout<<"\nAlphabetic list of words:\n";
  for_each(wordset.begin(),wordset.end(),display);
  cout<<endl;
  
  map<string,int> wordmap;
  for(auto it=wordset.begin();it!=wordset.end();it++)
  {
    wordmap[*it]=count(words.begin(),words.end(),*it);
  }

  cout<<"\nWord frequency:\n";
  for(auto it=wordset.begin();it!=wordset.end();it++)
  {
    cout<<*it<<": "<<wordmap[*it]<<endl;
  }
  cout<<endl;
  return 0;
}

string& ToLower(string& s)
{
  transform(s.begin(),s.end(),s.begin(),toLower);
  return s;
}

void display(const string& s)
{
  cout<<s<<" ";
}
