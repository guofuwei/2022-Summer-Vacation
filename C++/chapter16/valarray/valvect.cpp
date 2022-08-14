#include <algorithm>
#include <iostream>
#include <valarray>
#include <vector>

int main()
{
  using namespace std;
  vector<double> data;
  double tmp;
  cout << "Enter nums(<=0 to quit):";
  while (cin >> tmp && tmp > 0) {
    data.push_back(tmp);
  }
  sort(data.begin(), data.end());
  int size = data.size();
  valarray<double> numbers(size);
  for (int i = 0; i < size; i++) {
    numbers[i] = data[i];
  }
  valarray<double> sq_rts(size);
  sq_rts = sqrt(numbers);

  for (int i = 0; i < size; i++) {
    cout << numbers[i] << ":" << sq_rts[i]<<endl;
  }
}
