#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the First number: " << endl;
    cin >> num1;

    cout << "Enter the Second number: " << endl;
    cin >> num2;

    cout << "Enter the Third number: " << endl;
    cin >> num3;

    if (num1 > 0 && num2 > 0 && num3 > 0)
    {
        if (num1 >= num2 && num1 >= num3)
        {
            cout << "The greatest number is: " << num1 << endl;
        }
        else if (num2 >= num1 && num2 >= num3)
        {
            cout << "The greatest number is: " << num2 << endl;
        }
        else
        {
            cout << "The greatest number is: " << num3 << endl;
        }
    }
    else
    {
        cout << "Please enter three positive integers." << endl;
    }

    return 0;
}