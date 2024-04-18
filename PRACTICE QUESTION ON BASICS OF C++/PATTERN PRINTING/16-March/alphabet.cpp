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
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
}