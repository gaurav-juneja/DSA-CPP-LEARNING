#include <iostream>
using namespace std;

int main()
{
    int row,col,num,value;
    cout<<"Enter the Number: ";
    cin>>num;
    row=0;
    value= row%2;                   // Alternating pattern of 0 and 1
    while(row<=num)
    {
        col=0;
        while (col<row)
        {
            cout<<value<<" ";
            value= 1 - value;       // Flip between 0 and 1
            col++;
        }
        cout<<endl;
        row++;
    }
}