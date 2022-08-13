#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void output(const string& s) { cout << s << " "; }

int main()
{
  string s1[4] = { "fine", "fish", "fashion", "fate" };
  string s2[2] = { "busy", "bats" };
  string s3[2] = { "silly", "singers" };
  vector<string> words(4);
  copy(s1, s1 + 4, words.begin());
  std::for_each(words.begin(), words.end(), output);
  cout << endl;

  copy(s2, s2 + 2, std::back_insert_iterator<vector<string> >(words));
  std::for_each(words.begin(), words.end(), output);
  cout << endl;

  copy(s3,s3+2,std::insert_iterator<vector<string> > (words,words.begin()));
  std::for_each(words.begin(), words.end(), output);
  cout << endl;

  return 0;
}
