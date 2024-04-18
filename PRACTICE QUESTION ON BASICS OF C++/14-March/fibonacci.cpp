#include <iostream>
using namespace std;

int main()
{
    int num, first=0, second=1, sum;
    cout<<"Enter a Number: ";
    cin>>num;

    for(int i=0; i<num; i++)
    {
        cout<<first<<" ";
        sum= first+second;
        first = second;
        second = sum;

    }
}