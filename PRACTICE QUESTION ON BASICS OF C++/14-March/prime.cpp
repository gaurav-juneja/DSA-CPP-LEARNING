#include <iostream>
using namespace std;

int main()
{
    int num;
    bool is_prime=true;
    do{
    cout<<"Enter the number to check wheather it's prime or not : ";
    cin>>num;
        if (num <= 0)
        {
            cout << "Please enter a positive integer."<<endl;
        }
    } while (num <= 0);

    if (num == 1)
        is_prime = false;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            is_prime = false;
            break;
        }
    }

    if(is_prime==true)
    {
        cout<<"Prime Number";
    }
    else{
        cout<<"Non-Prime Number";
    }
}