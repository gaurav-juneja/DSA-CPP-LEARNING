#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    x=10;
    y=20;
    z=30;

    int *ptr_x = &x;  // Stores the address of x
    cout<<"Address of X: "<<ptr_x<<endl;

    int *ptr_y = &y; // Stores the address of y
    cout<<"Address of Y: "<<ptr_y<<endl;

    // we can also declare pointer before the code
    // Another Methods
    // int * point;
    // int* point 
    int *point;     // Declaration only. Not initialized yet!
    int *point1;

    point = &z; // re-assignment / update then no need to put *
    cout<<"Address of Z: "<<point<<endl;

    point1 = &z; // print the original value;
    cout<<"Value of Z: "<<*point1<<endl;  // * is a dereference operator which is used to print the value stored on the address pointed by "point1" 

    // updating z with pointer 
    *point1 = 40;
    cout<<"Updated Value of Z: "<<z<<endl;

    // Stored value of point1 in new variable
    int value_z = *point1;
    cout<<"Z: "<<value_z<<endl;

    int result;
    int *ptr_result = &result;

    *ptr_result = *ptr_x + *ptr_y;
    cout<<"Result: "<<result<<endl;
    cout<<"Result: "<<*ptr_result<<endl;

    // ptr_x = 15; we cant do this because ptr store only address 

    // * ptr_x = &y; this will not work as we cannot store address in an int bucket 

    cout<<"Address of Pointer ptr_x Itself : "<<&ptr_x;
}