#include <iostream>
using namespace std;

int main()
{
    int principal;
    float rate, time;

    cout << "Enter the Principal Amount: " << endl;
    cin >> principal;

    cout << "Enter the Rate: " << endl;
    cin >> rate;

    cout << "Enter the Time: " << endl;
    cin >> time;

    float interest = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << interest << endl;
    return 0;
    
}