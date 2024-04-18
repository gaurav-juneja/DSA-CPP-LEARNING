#include <iostream>
using namespace std;

int main()
{
    int row,col,num;
    char ch;
    cout<<"Enter the Number: ";
    cin>>num;
    row=1;
    while(row<=num)
    {
        col=1;
        ch='A';
        while(col<=row)
        {
            if(row%2==0)
            {
            cout<<ch<<" ";
            }
            else
            {
            cout<<col<<" ";
            }
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}