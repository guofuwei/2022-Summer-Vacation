#include <iostream>
using namespace std;

int main()
{
    int feet, inches, pounds;
    const int kFootToInch = 12;
    const double kInchToMeter = 0.0254;
    const double kKilogramToPound = 2.2;
    cout << "Please input your feet:";
    cin >> feet;
    cout << "Please input your inches:";
    cin >> inches;
    cout << "Please input your pounds:";
    cin >> pounds;
    double BMI = (pounds / kKilogramToPound) / ((feet * kFootToInch + inches) * kInchToMeter) / ((feet * kFootToInch + inches) * kInchToMeter);
    cout << "Your BMI is " << BMI;
    return 0;
}
