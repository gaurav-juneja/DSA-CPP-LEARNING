#include <iostream>
using namespace std;

int main()
{
    int num,i,table;
    cout<<"Enter the Number: ";
    cin>>num;
    for (i=1;i<=10;i++)
    {
        table = num*i;
        cout<<num<<" * "<<i<<" = "<<table<<endl;
    }
}