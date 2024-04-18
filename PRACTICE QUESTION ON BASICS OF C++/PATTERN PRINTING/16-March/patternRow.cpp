#include <iostream>
using namespace std;

int main()
{
    int row,col,num;
    cout<<"Enter the Number: ";
    cin>>num;
    row=1;
    while(row<=num)
    {
        col=1;
        while (col<=num)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}