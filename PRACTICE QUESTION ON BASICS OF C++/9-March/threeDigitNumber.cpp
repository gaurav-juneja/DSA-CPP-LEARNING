#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    if (num >= 100 && num <= 999)
    {
        cout << "Yes, it is a three digit number" << endl;
    }
    else
    {
        cout << "No, it is not a three digit number" << endl;
    }

    return 0;
}
