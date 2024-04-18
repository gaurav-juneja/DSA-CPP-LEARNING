#include <iostream>
using namespace std;

int main()
{
    int marks[6]={9,83,31,47,23,79};
    cout<<"Roll No. of those Students whose marks are less than 35 are: "<<endl;
    for(int i=0; i<6; i++)
    {
        if(marks[i]<35)
        {
            cout<<i+1<<endl; // (i+1) bcz roll no. can't be zero
        }
    }
}