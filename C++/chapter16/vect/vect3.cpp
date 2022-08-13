#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct Review {
  string title;
  int rating;
};

bool FillReview(Review& rr);
void ShowReview(const Review& rr);
bool operator<(const Review& r1, const Review& r2);
bool worsethan(const Review& r1, const Review& r2);

int main()
{
  vector<Review> books;
  Review temp;
  while (FillReview(temp)) {
    books.push_back(temp);
  }
  if (books.size() > 0) {
    cout << "Thank you!you enter the following:\n"
         << "Rating\tBook\n";
    std::for_each(books.begin(), books.end(), ShowReview);

    std::sort(books.begin(), books.end());
    cout << "Sorted by title\nRating\tBook\n";
    std::for_each(books.begin(), books.end(), ShowReview);

    std::sort(books.begin(), books.end(), worsethan);
    cout << "Sorted by rating\nRating\tBook\n";
    std::for_each(books.begin(), books.end(), ShowReview);

    std::random_shuffle(books.begin(), books.end());
    cout << "After Shuffle\nRating\tBook\n";
    std::for_each(books.begin(), books.end(), ShowReview);
  } else {
    cout << "No enteies" << endl;
  }
  cout << "Bye!" << endl;
  return 0;
}

bool operator<(const Review& r1, const Review& r2)
{
  if (r1.title < r2.title)
    return true;
  if (r1.title == r2.title && r1.rating < r2.rating)
    return true;
  return false;
}

bool worsethan(const Review& r1, const Review& r2)
{
  if (r1.rating < r2.rating)
    return true;
  return false;
}

bool FillReview(Review& rr)
{
  std::cout << "Enter book title (quit to quit): ";
  std::getline(std::cin, rr.title);
  if (rr.title == "quit")
    return false;
  std::cout << "Enter book rating: ";
  std::cin >> rr.rating;
  if (!std::cin)
    return false; // get rid of rest of input line    
  while (std::cin.get() != '\n')
    continue;
  return true;
}

void ShowReview(const Review& rr)
{
  std::cout << rr.rating << "\t" << rr.title << std::endl;
}
