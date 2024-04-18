#include <iostream>
using namespace std;

int main()
{
    float PI = 3.14;
    int r;
    cout << "Enter the radius of the circle: " << endl;
    cin >> r;

    float area = PI * r * r;
    float circumference = 2 * PI * r;

    if (area > circumference)
    {
        cout << "Area is larger than circumference" << endl;
    }
    else if (area < circumference)
    {
        cout << "Circumference is larger than Area" << endl;
    }
    else
    {
        cout << "Area is equals to circumference of circle" << endl;
    }

    return 0;
}