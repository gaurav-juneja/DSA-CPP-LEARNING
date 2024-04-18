#include <iostream>
#include <vector>
using namespace std;
int main(){

    // check the occurence
/*
    vector <int> v(4); 
     int occur = -1;
    
    for(int &ele:v)
    {
        cin>>ele;
    }

    int x;
    cout<<"Enter x: ";
    cin>>x;

   
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occur = i;
        }
    }
    cout<<"index is: "<<occur<<endl;
*/

    //check the array is sorted or not

/*
    int arr[5] = {1,2,3,4,5};
    bool sort = true;
    for(int i=1; i<5; i++)
    {
        if(arr[i]<=arr[i-1])
        {
            sort = false;
        }

    }
    cout<<sort<<endl;
*/

    // find the difference btw sum of even and odd indeces.

    int arr[6] = {1,2,3,4,5,6};
    int even=0;
    int odd=0;
    int diff;
    for (int i = 0; i<6; i++)
    {
        if (arr[i]%2 == 0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    diff=even-odd;
    cout<<"Sum of Even: "<<even<<endl;
    cout<<"Sum of Odd: "<<odd<<endl;
    cout<<"Difference btw Even and Odd: "<<diff<<endl;
}