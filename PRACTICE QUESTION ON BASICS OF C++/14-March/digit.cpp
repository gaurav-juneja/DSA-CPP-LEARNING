#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout<<"Enter the Number: ";
    cin>>num;
    do
    {
        num=num/10;
        count++;
    }while(num>0);
    cout<<"Number of Digits: "<<count;
}