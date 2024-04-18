#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;  // v(5) if we declare the size then we can directly insert the elements using cin>>v[i];

    //for loop
    cout<<"Enter the Elements: "<<endl;
    for(int i = 0; i <5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
        // cin>>v[i];
    }

    cout<<"The Elements are: "<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin() + 2 , 36);

    //for each
    cout<<"The Elements are: "<<endl;
    for (int ele : v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    v.erase(v.end() - 2);

    //while loop
    cout<<"The Elements are: "<<endl;
    int idx = 0;
    while(idx<=v.size())
    {
        cout<<v[idx++]<<" ";
    }
}