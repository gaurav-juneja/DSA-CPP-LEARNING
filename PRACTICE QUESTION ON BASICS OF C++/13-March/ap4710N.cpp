#include <iostream>
using namespace std;

int main()
{
    int n, firstTerm=4,commonDiff=3;
    cout<< "Enter the number of terms (n): ";
    cin >> n;
    cout<<"AP: ";   
    for (int i=0; i<n; i++)
    {
        cout<<firstTerm<<" ";
        firstTerm+=commonDiff;
    }
}