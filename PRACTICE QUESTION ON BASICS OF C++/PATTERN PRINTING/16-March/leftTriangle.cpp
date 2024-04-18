#include <iostream>
using namespace std;

int main()
{
    int row,col,num;
    cout<<"Enter the Number: ";
    cin>>num;
    row=num;
    while(row>=1)
    {
        col=1;
        while (col<=row)
        {
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row--;
    }
}