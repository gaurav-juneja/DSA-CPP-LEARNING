#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    string first;
    string second;

    vector<int> freq(26, 0);

    cout << "Enter first string: " << endl;
    cin >> first;
    cout << "Enter second string: " << endl;
    cin >> second;

    if (first.length() != second.length())

    {
        cout << "Both string's length are not equal";
        return false;
    }

    for (int i = 0; i < first.length(); i++)
    {

        freq[first[i] - 'a']++;
        freq[second[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Not anagram";
            return 0;
        }
    }
    cout << "They are anagram";
    return 0;
}
