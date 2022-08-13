#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <string>

//using std::cin;
using std::cout;
using std::endl;
using std::set;
using std::string;

int main()
{
  const int N = 6;
  string s1[N] = { "buffoon", "thinkers", "for", "heavy", "can", "for" };
  string s2[N] = { "metal", "any", "food", "elegant", "deliver", "for" };

  set<string> A(s1, s1 + N);
  set<string> B(s2, s2 + N);

  std::ostream_iterator<string,char> out(cout, " ");
  cout << "Set A: ";
  std::copy(A.begin(), A.end(), out);
  cout << endl;

  cout << "Set B: ";
  std::copy(B.begin(), B.end(), out);
  cout << endl;

  cout << "Union of A and B: ";
  std::set_union(A.begin(), A.end(), B.begin(), B.end(), out);
  cout << endl;

  cout<<"Intersection of A and B: ";
  std::set_intersection(A.begin(),A.end(),B.begin(),B.end(),out);
  cout<<endl;

  cout<<"Difference of A and B: ";
  std::set_difference(A.begin(),A.end(),B.begin(),B.end(),out);
  cout<<endl;

  set<string> C;
  cout<<"Set C: ";
  std::set_union(A.begin(),A.end(),B.begin(),B.end(),std::insert_iterator<set<string> >(C,C.begin()));
  copy(C.begin(),C.end(),out);
  cout<<endl;

  string s3("grungy");
  C.insert(s3);
  cout<<"Set C after insertion: ";
  std::copy(C.begin(),C.end(),out);
  cout<<endl;

  cout<<"Showing a range: ";
  std::copy(C.lower_bound("ghost"),C.upper_bound("spook"),out);
  cout<<endl;

  return 0;
}
