#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v={1,2,3};

    vector <int> v2;
    v2={2,5,6};

    int total = v.size()+v2.size();
    v.resize(total);
    cout<<"Original Vector: "<<endl;
    for(int ele : v)
    {
        cout<<ele<<" ";
    }
    int j  =0;
    for(int i=0;i<v.size();i++)
    {
        if (v[i] == 0 && j < v2.size())
        {
            v[i] = v2[j];
            j++;
        }       
    }
    cout<<endl;
      cout << "Modified Vector:" << endl;
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

}