#include <iostream>
using namespace std;

int main()
{
    int num,digit,sum=0;
    cout<<"Enter the Number: ";
    cin>>num;
    do{
        digit=num%10;
        sum+=digit;
        num=num/10;
    }while(num>0);
    cout<<"Sum of Digits: "<<sum;
}
