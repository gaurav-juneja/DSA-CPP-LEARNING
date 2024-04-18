#include <iostream>
using namespace std;
int main()
{
    int n, arr[n],min;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    for (int i=0 ; i<n ; i++)
    {
        if (arr[i]<arr[i+1])
        {
            arr[i+1]= arr[i];
            min = arr[i];
        }
    }
    cout<<"Min: "<<min<<endl;
}