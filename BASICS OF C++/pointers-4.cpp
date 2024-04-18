#include <iostream>
using namespace std;

void process(int *arr, int n)
{
    // inside this fxn we have the access of the same array in the main
    for(int i=0 ; i<n ; i++)
    {
        cout<<*(arr + i)<<endl;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int * ptr = &arr[0];
    // the name(arr) of array will work as pointer ang give address of the first index of the array.
    cout<<arr<<" "<<*arr<<endl;
    cout<<arr<<" "<<*(arr+0)<<endl; //same same but difflent
    
    cout<<arr<<" "<<*(arr+1)<<endl;
    cout<<arr<<" "<<*(arr+2)<<endl;

    process(arr, 3);
    cout<<endl;

    int *ptr1 = (arr + 4);
    cout<<*ptr1<<endl;
    *ptr1--;
    cout<<*ptr1<<endl;
}