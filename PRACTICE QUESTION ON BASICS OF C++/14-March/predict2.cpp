#include <iostream>
using namespace std;

int main() {
    int i;
    while (i = 10) {
        cout << i << endl;
        i = i + 1;
    }
    return 0;
}

// The output of the given code will be an infinite loop printing the value 10 repeatedly.