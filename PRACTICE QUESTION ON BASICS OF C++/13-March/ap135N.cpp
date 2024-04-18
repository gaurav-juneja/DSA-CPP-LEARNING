#include <iostream>
using namespace std;

int main()
{
    int n, firstTerm=1,commonDiff=2;
    cout<< "Enter the number of terms (n): ";
    cin >> n;
    cout<<"AP: ";   
    for (int i=0; i<n; i++)
    {
        cout<<firstTerm<<" ";
        firstTerm+=commonDiff;
    }
}