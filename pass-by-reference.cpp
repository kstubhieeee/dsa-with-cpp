#include <iostream>
using namespace std;

void refer(int &z) // we use & to fetch the address
{
  z=z+1;
  cout<<"The number in function is : "<<z<<endl;
  z=z+1;
  cout<<"The number in function is : "<<z<<endl;
  z=z+1;
  cout<<"The number in function is : "<<z<<endl;
  
  
}

int main() {
 int x;
  cin >> x;
  refer(x);
  cout<<"The number in main is : "<<x;
}