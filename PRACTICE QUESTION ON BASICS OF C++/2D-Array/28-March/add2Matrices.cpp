#include <iostream>
using namespace std;

int main()
{
    // 1st Matrix
    int row,col;
    cout<<"Enter the number of rows and columns of 1st Matrix: "<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements of the 1st Matrix: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    // 2nd Matrix
    int arr2[row][col];
    cout<<"Enter the elements of the 2nd Matrix: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cin>>arr2[i][j];
        }
    }
    // Sum
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cout<<arr[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}