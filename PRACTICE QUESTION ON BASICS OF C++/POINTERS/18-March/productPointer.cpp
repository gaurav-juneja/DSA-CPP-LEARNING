#include <iostream>
using namespace std;

void product(int a, int b)
{
    int multiply = a * b;
    cout<<"Multiplication is: "<<multiply;
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
    
    product (*ptr_x , *ptr_y);

}