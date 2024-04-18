#include <iostream>
using namespace std;

void FirstLast(string s, char ch, int *first, int *last)
{
    for ( int i=0 ; i<s.length() ; i++ ) 
    {
        if ( s[i] == ch )
        {
            *first = i;
            break;
        }
    }

    for( int i=s.length()-1 ; i>=0 ; i-- )
    {
        if ( s[i] == ch )
        {
            *last = i;
            break;
        }
    }
}
int main()
{
    string s = "Gaurav";
    int first = -1;
    int last = -1;
    char ch = 'a';

    int *p_first = &first;
    int *p_last = &last;

    FirstLast(s,ch,p_first,p_last);

    cout<<"[ "<<first<<" "<<last<<" ]";

}