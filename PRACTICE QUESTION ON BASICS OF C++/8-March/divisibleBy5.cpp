#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Number is divisible by 5." << endl;
    }
    else if (num < 0)
    {
        cout << "Number is Negative" << endl;
    }
    else
    {
        cout << "Number is not divisible by 5." << endl;
    }

    return 0;
}