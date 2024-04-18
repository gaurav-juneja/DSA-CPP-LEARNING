#include <iostream>
using namespace std;

int main()
{
    int num,digit, rev=0;
    cout<<"Enter a Number: ";
    cin>>num;
    do
    {
        digit = num%10;
        rev = rev*10 + digit;
        num/=10;
    }while(num>0);
    cout<<"Reverse of the given number is: "<<rev;
}