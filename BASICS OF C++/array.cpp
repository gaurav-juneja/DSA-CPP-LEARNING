#include <iostream>
using namespace std;

int main()
{
    //sum
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

    //max
    int max = arr[0];
    for (int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;

    //Linear-Search
    int key;
    cout<<"Enter the element to be find: ";
    cin>>key;
    int ans = -1;
    for(int i=0;i<5;i++)
    {
        if(key ==arr[i])
        {
            ans=i;
            break;
        }
    }
    cout<<"Found at: "<<ans+1<<" position."<<endl;
}