#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
    {
        return;
    }
    f(i + 1, n);
    cout << i << " ";
}
int main()
{

    int n;
    cin >> n;

    f(1, n);
}