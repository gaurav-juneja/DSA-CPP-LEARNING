#include <iostream>
using namespace std;
int main()
{
    int n, arr[n],product=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    //for loop
    for(int i=0;i<n;i++)
    {
        product*=arr[i];
    }
    cout<<"Product: "<<product<<endl;
}