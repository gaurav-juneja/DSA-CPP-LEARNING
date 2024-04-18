#include<iostream>
#include <vector>
using namespace std;

int main(){
    int k;
    vector <int> v(6);
    v={3,4,5,7,8};
    //trial
    cout<<"Enter the number of steps to rortate"<<endl;
    cin>>k;
    for(int i=0; i<v.size(); i++){

        v[i+k] = v[i];

    }
    for(int i=0; i<v.size(); i++){

        cout<<v[i]<<" ";

    }
}
