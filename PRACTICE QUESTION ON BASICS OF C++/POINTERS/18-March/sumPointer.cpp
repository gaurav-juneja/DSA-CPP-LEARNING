#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int sum = a + b;
    cout<<"Sum is: "<<sum;
}

int main()
{
    int x,y;
    int *ptr_x = &x;
    int *ptr_y = &y;

    cout<<"Enter the 1st Number: ";
    cin>>x;
    cout<<"Enter the 2nd Number: ";
    cin>>y;
    
    sum (*ptr_x , *ptr_y);

}