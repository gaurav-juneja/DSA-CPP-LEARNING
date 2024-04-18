#include <iostream>
using namespace std;

int main()
{
    int row,col,num;
    cout<<"Enter the Number: ";
    cin>>num;

    // Upper Half
    row=1;
    while(row<=num)
    {
        col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

    //Lower Half
    row=num-1;
    while(row>=1)
    {
        col=1;
        while (col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row--;
    }
}