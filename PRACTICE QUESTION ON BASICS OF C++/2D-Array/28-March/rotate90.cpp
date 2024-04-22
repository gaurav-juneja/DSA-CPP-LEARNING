#include <iostream>
using namespace std;

int main()
{
   int n;
    cout<<"Enter the number of rows and columns of Matrix: "<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int rotate[n][n];
    cout<<"After Rotation 90 Deg Matrix is: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            rotate[j][n-1-i]=arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cout<<rotate[i][j]<<" ";
        }
        cout<<endl;
    }
    
}