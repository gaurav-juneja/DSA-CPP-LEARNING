#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    vector <int> building(8);
    building = { 3,1,2,4,0,1,3,2};
    int left[8],right[8];

    left[0]=building[0];

    for(int i = 1 ; i<8; i++)
    {
        left[i] = max(left[i-1],building[i]);
    }

    right[7]=building[7];
    for (int i= 6; i>=0; i--) //i=n-2
    {
        right[i] = max(right[i+1],building[i]);
    }

    int result = 0;
    for(int i = 0; i<8; i++)
    {
        result += min(left[i],right[i]) - building[i];
    }
    cout<<"Total units of water stored between the buildiungs: "<<result<<endl;

    return 0;
}