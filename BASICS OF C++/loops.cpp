#include <iostream>
using namespace std;
 
int main()
{
    //For Loop
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout<<endl;

    //While Loop
    int num;
    cout<<"Enter the Number: ";
    cin >> num;
    int sum = 0;
    int j=1;
    while (j<=num) 
    {
        sum += j;
        j++;
    }
    cout<<"Sum of first "<<num<<" number is: "<<sum<<endl;

    //Do-While Loop
    int k = 10;
    do
    {
        cout<<k;
        k++;
    }while(k<5); //must execute at least one time even it's wrong
}