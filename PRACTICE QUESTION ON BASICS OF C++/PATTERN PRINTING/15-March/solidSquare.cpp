#include <iostream>
using namespace std;

int main()
{
    int row_col;
    cout<< "Enter the number of rows and columns: ";
    cin>>row_col;
    for (int i = 0; i < row_col; i++)
    {
        for(int j = 0; j <row_col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}