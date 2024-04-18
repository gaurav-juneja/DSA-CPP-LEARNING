#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (num > 0)
    {
        if (num % 5 == 0 && num % 3 == 0)
        {
            cout << "Number is divsible by both 3 and 5" << endl;
        }
        else if (num % 5 == 0)
        {
            cout << "Number is divsible by only 5" << endl;
        }

        else if (num % 3 == 0)
        {
            cout << "Number is divsible by only 3" << endl;
        }

        else
        {
            cout << "Number is not divsible by neither 3 nor 5" << endl;
        }
    }
    else
    {
        cout << "Enter a positive number";
    }
    return 0;
}
