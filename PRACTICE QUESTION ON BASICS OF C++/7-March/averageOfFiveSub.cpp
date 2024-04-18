#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int total = 0;
    float marks[5];
    float average = 0;
    cout << "Enter the marks of 5 subjects :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        total = total + marks[i];
    }

    average = total / 5;
    cout << "Average is: " << average << endl;
    return 0;
}