#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even." << endl;
    }
    else if(num < 0)
    {
        cout << "Number is negative." << endl;
    }
    
    else{
        cout << "Number is odd." << endl;
    }

    return 0;
}