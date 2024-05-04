#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the String: ";
    cin >> s;
    char ch= 'a';
    for(int i=0; i<s.length(); i++)
    {
        if(i%2==0)
        {
            s[i]=ch;
        }
    }
    cout<<"New String is: "<<s<<endl;
}