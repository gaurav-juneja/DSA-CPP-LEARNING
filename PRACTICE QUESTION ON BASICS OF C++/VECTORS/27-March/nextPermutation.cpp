// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector <int> arr(3);
//     arr={1,2,3};
//     int n = arr.size();
//     int idx = -1;

//     // Find the Dip
//     for(int i=n-2; i>=0; i--)
//     {
//         if(arr[i] > arr[i+1])
//         {
//             idx = i;
//             break;
//         }
//     }  
//     // If no dip found
//     if(idx == -1)
//     {
//         reverse(arr.begin(),arr.end());
//     }
//     // Swap where the dip found
//     else
//     {

//     for(int i=n-1;i>=idx;i--)
//     {
//         if(arr[i] > arr[idx])
//         {
//             swap(arr[i],arr[idx]);
//             break;
//         }
//     }
//     }
//     // reverse the remaining
//     reverse(arr.begin() + idx + 1,arr.end());
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2,4,5, 3,1,0,0};
    int n = arr.size();
    int idx = -1;

    // Find the Dip
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx = i;
            break;
        }
    }

    // If no dip found
    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        // Find the smallest element greater than arr[idx] to the right of idx
        int smallestGreaterIdx = idx + 1;
        for (int i = idx + 1; i < n; i++)
        {
            if (arr[i] > arr[idx] && arr[i] < arr[smallestGreaterIdx])
            {
                smallestGreaterIdx = i;
            }
        }

        // Swap arr[idx] and arr[smallestGreaterIdx]
        swap(arr[idx], arr[smallestGreaterIdx]);

        // Reverse the elements to the right of idx
        reverse(arr.begin() + idx + 1, arr.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
