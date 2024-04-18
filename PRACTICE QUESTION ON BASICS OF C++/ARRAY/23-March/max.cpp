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
    int max = arr[0];
    for (int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;
}