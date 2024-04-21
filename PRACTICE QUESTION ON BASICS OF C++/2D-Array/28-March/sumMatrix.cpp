#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<row;i++)  
    {
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of the elements of the array is: "<<sum<<endl;
}