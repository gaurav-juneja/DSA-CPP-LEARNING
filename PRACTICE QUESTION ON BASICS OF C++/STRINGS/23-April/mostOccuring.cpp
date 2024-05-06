#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> freq(26,0);
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    int maxFreq=0;
    char maxChar= 'a';

    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq=freq[i];
            maxChar=i+'a';
        }
    }
    cout<<"Most Occuring Character is: "<<maxChar<<", with frequency: "<<maxFreq;
}