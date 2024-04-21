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
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++) // We start from i+1 to avoid swapping elements twice
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<"The Transpose of the Matrix is: "<<endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}