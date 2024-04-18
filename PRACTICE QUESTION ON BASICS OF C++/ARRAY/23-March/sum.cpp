#include <iostream>
using namespace std;
int main()
{
    int arr[5],sum=0;
    cout<<"Enter array elements:\n";
    //for each loop
    for(int &element:arr)
    {
        cin>>element;
    }
    //for loop
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
}