#include <iostream>
using namespace std;

int main()
{
    int l,b,a,p;
    cout<<"Enter the length of the Rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the Rectangle: ";
    cin>>b;
    a= l*b;
    cout<< "Area of the Rectangle is: "<<a<<endl;
    p= 2*(l+b);
    cout<< "Parameter of the Rectangle is: "<<p<<endl;

    if (a>p)
    {
        cout<<"Area of the Rectangle is greater than the Parameter of the Rectangle.";
    }
}