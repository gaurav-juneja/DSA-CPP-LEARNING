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
        int large=arr[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>large)
            {
                large = arr[i][j];
            }
        }
    }
    cout<<"Largest: "<<large<<endl;
}