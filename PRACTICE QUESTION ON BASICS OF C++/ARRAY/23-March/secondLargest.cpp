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
    
    int max = -1;
    int max2 = -1;

    for (int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i=0;i<5;i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
        {
            max2= arr[i];
        }
    }
    cout<<"Largest: "<<max<<endl;
    cout<<"Second Largest: "<<max2<<endl;
}