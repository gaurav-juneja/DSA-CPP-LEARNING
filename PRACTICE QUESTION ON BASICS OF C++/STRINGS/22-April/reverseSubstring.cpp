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
    if (length <= 5) 
    {
        cout << "String length is less than 5." << endl;
        return 0;
    }

    // Extract the substring from position 2 to 5
    string sub_s = s.substr(1,4);

    // Reverse the substring
    reverse(sub_s.begin() ,sub_s.end());

    // Replace the original substring with the reversed substring
    s.replace(1, 4, sub_s); // Position 2 to 5 are replaced with the reversed substring
    
    cout << "Modified string after reversing the substring from position 2 to 5: " << s << endl;
}