#include <iostream>
using namespace std;

int main()
{
int age ;
cout<<"Enter your Age: ";
cin>>age; 
if (age < 18) 
{
  cout << "Too small to Drive";
} 
else if (age > 60) 
{
  cout << "Too old to Drive.";
} 
else 
{
  cout << "Applicable for DL";
}
}