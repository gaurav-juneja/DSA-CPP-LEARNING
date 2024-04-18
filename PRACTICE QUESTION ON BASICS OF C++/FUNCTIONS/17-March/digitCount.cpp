#include <iostream>
using namespace std;

void digit(int n)
{
    int digit=0;
    while(n!=0)
    {
    n=n/10;
    digit++;
    }
    cout<<digit;
    cout<<endl;

    //square
    cout<<"Square of the Number is: "<<digit*digit;
}

int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Digits in this Number is: ";
    digit(num);
}