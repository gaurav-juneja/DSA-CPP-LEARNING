#include <iostream>
using namespace std;

int main()
{
    int a;
    bool b;
    float c;

    float x = sizeof(a);
    float y = sizeof(b);
    float z = sizeof(c);

    cout << "for int " << x << " bytes" << endl;
    cout << "for bool " << y << " bytes" << endl;
    cout << "for float " << z << " bytes" << endl;
}