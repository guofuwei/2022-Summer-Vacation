#include <iostream>

using namespace std;

int main()
{
    unsigned int a[3]{0};
    const double kDegreesToMintues = 60.0;
    const double kMintuesToSeconds = 60.0;
    int degrees, mintues, seconds;
    cout << "Enter a latitude in degrees,minutes,seconds:" << endl;
    cout << "First,enter the degrees:";
    cin >> degrees;
    cout << "Next,enter the mintues of the arc:";
    cin >> mintues;
    cout << "Finally,enter the seconds of arc:";
    cin >> seconds;
    cout << degrees << " degrees," << mintues << " mintues," << seconds << " seconds = " << degrees + mintues / kDegreesToMintues + seconds / kDegreesToMintues / kMintuesToSeconds << " degrees\n";
    return 0;
}