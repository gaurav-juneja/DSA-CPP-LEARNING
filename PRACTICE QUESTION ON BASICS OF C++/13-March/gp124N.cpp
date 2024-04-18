#include <iostream>
using namespace std;

int main()
{
    int n, a=1,r=2;
    cout<< "Enter the number of terms (n): ";
    cin >> n;
    cout<<"GP: ";   
    for (int i=0; i<n; i++)
    {
        cout<<a<<" ";
        a*=r;
    }
}