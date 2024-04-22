#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //1st Method with complexity O(n^2)

    /*
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
    */
    
    // Optimal Solution
    int n;
    cout<<"Enter the number of rows and columns of Matrix: "<<endl;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    cout<<"Enter the elements of the Matrix: "<<endl;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
     cout << "The Original matrix is:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Transpose the Matrix
    for(int i=0 ; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    // Reverse the Rows
    for(int i=0; i<n; i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
     cout << "After rotating 90 Deg:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}