#include <iostream>
using namespace std;

int main()
{
    int arr[2] = {4,15};
    int *ptr = &arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<(*ptr)++<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
}