#include <iostream>
using namespace std;

void areaOfCircle(int &r)
{
    int area = (2*3.14*r);
    cout<<"Area is: "<<area<<" units"<<endl;   
}

int main()
{
    int area,radius;
    cout<<"Enter the Radius of the Circle: ";
    cin>>radius;
    areaOfCircle(radius);
}