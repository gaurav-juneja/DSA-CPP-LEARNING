#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> originalVector = {1, 2, 3, 4, 5, 6}; // Original vector
    vector<int> reversedVector; // Vector to store elements in reverse order

    // Copying contents in reverse order
    for (int i = originalVector.size() - 1; i >= 0; i--) {
        reversedVector.push_back(originalVector[i]);
    }

    // Display original vector
    cout << "Original Vector: ";
    for (int num : originalVector) {
        cout << num << " ";
    }
    cout << endl;

    // Display reversed vector
    cout << "Reversed Vector: ";
    for (int num : reversedVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
