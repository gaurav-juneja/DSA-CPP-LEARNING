#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the String of even length: ";
    cin>>s;
    int length = s.length();
    if (length % 2 != 0) 
    {
        cout << "String length is not even." << endl;
        return 1;
    }
  
    reverse(s.begin(),s.begin() + length/2);

    cout<<"Modified String after Revesrsing Half String: "<<s<<endl;
}