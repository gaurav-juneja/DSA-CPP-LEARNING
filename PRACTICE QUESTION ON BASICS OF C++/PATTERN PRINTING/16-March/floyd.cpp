#include <iostream>
using namespace std;

int main()
{
    int row_col,count=1;
    cout<<"Enter the number of rows and columns: ";
    cin>>row_col;
    
    for(int i=1; i<=row_col; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

}