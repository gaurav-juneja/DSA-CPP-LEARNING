#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of X co-ordinate: ";
    cin>>x;
    cout<<"Enter the value of Y co-ordinate: ";
    cin>>y;
    if (x==0 && y!=0)
    {
        cout<<"Point lies on the Y-axis "<<"("<<x<<","<<y<<")"<<endl;
    }
    else if (y==0 && x!=0)
    {
        cout<<"Point lies on the X-axis "<<"("<<x<<","<<y<<")"<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"Point lies at the Origin "<<"("<<x<<","<<y<<")"<<endl;
    }
    else
    {
        cout<<"Point lies inside the plane "<<"("<<x<<","<<y<<")"<<endl;
    }
}