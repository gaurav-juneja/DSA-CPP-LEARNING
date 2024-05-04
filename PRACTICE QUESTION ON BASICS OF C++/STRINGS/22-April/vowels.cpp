#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    int count = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U')
        {
            count++;
        }
    }
    cout<<"Number of Vowels in String: "<<count<<endl;
}
