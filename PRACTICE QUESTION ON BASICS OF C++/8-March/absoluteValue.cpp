#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float num;
    int absValue;
    cout << "Enter the Number: ";
    cin >> num;
    absValue = abs(num);
    if (num > 0)
    {

        cout << "Absolute value is: " << absValue << endl;
    }
    else
    {
        cout << "Absolute value is: " << -absValue << endl;
        return 0;
    }
}