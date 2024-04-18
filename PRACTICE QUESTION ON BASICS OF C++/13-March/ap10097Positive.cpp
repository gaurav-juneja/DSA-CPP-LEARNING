#include <iostream>
using namespace std;

int main()
{
    int n, firstTerm=100,commonDiff=3;
    cout<<"AP: ";   
    for (int i=0; firstTerm>0; i++)
    {
        cout<<firstTerm<<" ";
        firstTerm-=commonDiff;
    }
}