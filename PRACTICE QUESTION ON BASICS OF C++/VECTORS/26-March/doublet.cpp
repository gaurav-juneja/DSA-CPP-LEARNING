#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(6);
    arr = {2, 4, 3, 5, 6, 7};
    int z;

    cout << "Enter the value for the sum: " << endl;
    cin >> z;

    for (int x = 0; x < 6; x++)
    {
        for (int y = x + 1; y < 6; y++)
        {
            if (arr[x] + arr[y] == z)
            {
                cout << "Elements are " << arr[x] << " " << arr[y] << endl;
            }
        }
    }
}