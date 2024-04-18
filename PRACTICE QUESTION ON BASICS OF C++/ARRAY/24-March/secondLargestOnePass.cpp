 #include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int first,second;
    cout<<"Enter array elements:\n";
    //for each loop
    for(int &element:arr)
    {
        cin>>element;
    }
    for (int i=0 ; i<5 ; i++)
    {
        if (arr[i]>arr[i+1])
        {
            arr[i+1] = arr[i];
            first = arr[i];
        }
    }
    cout<<"Second largest element is: "<<first;
    return 0;
}