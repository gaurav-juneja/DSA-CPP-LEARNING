#include <iostream>
using namespace std;

int main()
{
int sub[50], i ;
for ( i = 0 ; i <= 48 ; i++ ) ; // This semicolon terminates the loop
{
    sub[i] = i ;
    cout<<sub[i]<<endl ;
}
}