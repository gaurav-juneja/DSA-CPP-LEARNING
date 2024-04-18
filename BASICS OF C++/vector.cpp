#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;

    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.insert(v.begin() + 2 , 36 );
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.resize(8);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    v.resize(10);
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    cout<<"Size of Vector: "<<v.size()<<endl;
    cout<<"Capacity of Vector: "<<v.capacity()<<endl;

}