#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter array elements:\n";
    //for each loop
    for(int &element:arr)
    {
        cin>>element;
    }
    int x;
    cout<<"Enter the element to be find: ";
    cin>>x;
    int ans = -1;
    for(int i=0;i<5;i++)
    {
        if(x ==arr[i])
        {
            ans=i;
            break;
        }
    }
    cout<<"Found at: "<<ans+1<<" position."<<endl;
}