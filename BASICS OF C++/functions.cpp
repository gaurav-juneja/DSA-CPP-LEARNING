#include <iostream>
using namespace std;

// Pass by Value : parameters values are copied to another variable

void sum(int x, int y) // These are the FORMAL PARAMETERS which are defined during the defination of function.
{
    x=10;  // This will not affect the actual valueor parameters.
    y=20;
}

// Pass by Reference : parameters values are passed

void ref(int &p, int &q) 
{
    p=10;
    q=20;  // Now the value will be changed because both variable are using same memory location.
}

// Main Function
int main()
{
    int a=5,b=6,c=7,d=8;
    sum(a,b);   // These are the ACTUAL PARAMETERS which are defined during function call.
    ref(c,d);
    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
}