#include <iostream>
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

int main()
{
  vector<Review> books;
  Review temp;
  while (FillReview(temp)) {
    books.push_back(temp);
  }
  int num = books.size();
  if (num > 0) {
    cout << "Thank you!you enter the following:\n"
         << "Rating\tBook\n";
    for (int i = 0; i < num; i++) {
      ShowReview(books[i]);
    }
    cout << "Reprising:\n"
         << "Rating\tBook\n";
    vector<Review>::iterator pr;
    for (pr = books.begin(); pr != books.end(); pr++) {
      ShowReview(*pr);
    }
    vector<Review> oldlist(books);

    if (num > 3) {
      books.erase(books.begin() + 1, books.begin() + 3);
      cout << "After erasure:" << endl;
      for (pr = books.begin(); pr != books.end(); pr++) {
        ShowReview(*pr);
      }
      books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
      cout << "After insertion:" << endl;
      for (pr = books.begin(); pr != books.end(); pr++) {
        ShowReview(*pr);
      }
    }

    books.swap(oldlist);
    cout << "Swap books with oldlist:" << endl;
    for (pr = books.begin(); pr != books.end(); pr++) {
      ShowReview(*pr);
    }
  } else {
    cout << "Nothing entered,nothing gained.\n";
  }
  return 0;
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
