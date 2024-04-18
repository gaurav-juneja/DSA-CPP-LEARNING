#include <iostream>
using namespace std;

int main() {
    while ('a' < 'b')
        cout << "malayalam is a palindrome" << endl;
    return 0;
}

//Goes under infinit loop bcz ASCII code of a is always less than b. i.e. 65<66