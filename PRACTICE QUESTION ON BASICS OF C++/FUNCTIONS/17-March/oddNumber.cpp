#include <iostream>
using namespace std;

void odd(int a, int b)
{
    for (int i = a+1; i <b ; i++)
    {
        if(i % 2 !=0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int a,b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    cout<<"Odd Numbers between " <<a<<" & "<<b<<" are: "<<endl;
    odd(a,b);
}