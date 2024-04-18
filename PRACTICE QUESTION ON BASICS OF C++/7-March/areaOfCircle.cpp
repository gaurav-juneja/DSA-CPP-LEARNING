#include <iostream>

using namespace std;

int main()
{
    float PI = 3.14;
    float r;
    cout << "Enter the radius of the circle: " << endl;
    cin >> r;

    float area = PI * r * r;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}