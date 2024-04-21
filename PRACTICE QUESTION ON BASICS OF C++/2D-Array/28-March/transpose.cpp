#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of rows and columns of Matrix: "<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements of the Matrix: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Original Matrix is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The Transpose of the Matrix is: "<<endl;
        int t[col][row];
    for(int i=0;i<col;i++)
    {
        for(int j=0; j<row;j++)
        {
            t[i][j]=arr[j][i];
            cout<<" "<<t[i][j];
        }
        cout<<endl;
    }
    
}