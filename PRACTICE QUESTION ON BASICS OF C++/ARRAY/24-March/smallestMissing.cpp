#include <iostream>
using namespace std;
int main()
{
    int n, arr[n],gap;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter sorted array of equal gap:\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    gap = arr[1]-arr[0];

    cout<<gap;

    for(int i=0 ; i<n ; i++){
        if(arr[i+1] != arr[i]+ gap){
           

        }
    }

}