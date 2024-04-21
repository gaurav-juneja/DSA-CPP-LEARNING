#include <iostream>
using namespace std;

int main()
{
    int roll[4], marks[4];

    for (int i = 1; i < 5; i++)
    {
        cout << "Enter roll no. and marks for student " << i << endl;
        cin >> roll[i] >> marks[i];
    }
    cout << "Roll no. " << " " << "Marks" << endl;
    for (int i = 1; i < 5; i++)
    {
        cout << roll[i] <<" "<< marks[i] << endl;
    }
}