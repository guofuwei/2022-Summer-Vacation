#include <iostream>
using namespace std;

int main()
{
    int inch;
    const int k = 12;
    cout << "Please input your inchs:__\b\b";
    cin >> inch;
    cout << "Your tall is " << inch / k << " feet and " << inch % k << " inchs" << endl;
    return 0;
}