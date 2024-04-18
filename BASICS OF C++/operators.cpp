#include <iostream>
using namespace std;

int main()
{
    cout<<"ARITHMETIC"<<endl;
    // Arithmetic Operators
    int num1 = 10, num2= 20, num3=num1 + num2, num4= num1*num2;
    cout<<"1st Number is: "<<num1<<endl;
    cout<<"2nd Number is: "<<num2<<endl;
    cout<<"Sum of Numbers is: "<<num3<<endl;
    cout<<"Multiplication of Numbers is: "<<num4<<endl;

    cout<<"RELATIONAL"<<endl;
    // Relational Operators
    cout<<(num2>num1)<<endl;
    cout<<(num2==num1)<<endl;
    cout<<(num2!=num1)<<endl;

    cout<<"LOGICAL"<<endl;
    //Logical Operators
    bool a=true, b = false;
    cout<<(a&&b)<<endl;
    cout<<(a||b)<<endl;
    cout<<(!a)<<endl;


    cout<<"ASSIGNMENT"<<endl;
    //Assignment Operators
    num1-=num2;
    cout<<num1<<endl;


    cout<<"BITWISE"<<endl;
    //Bitwise Operators
    cout<<(~num1)<<endl;
    cout<<(num2<<1)<<endl;
    cout<<(num1|num2)<<endl;
    cout<<(num1&num2)<<endl;


    cout<<"Misc"<<endl;
    //Misc Operators
    cout<<sizeof(num1)<<endl;
    string ternary = (num2<15)? "Yes":"No";
    cout<<ternary<<endl;
}