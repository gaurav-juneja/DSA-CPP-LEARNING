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
    cout<<"Given Number: ";
    cin>>x;
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<"Greater Than Given Number: "<<count<<endl;

}   