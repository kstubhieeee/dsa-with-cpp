#include <iostream>
using namespace std;

void linear(int i,int n)
{
  if(n>=i)
  {
    cout<<i<<endl;
    linear(i+1,n);
  }
}

void linear1(int n)
{
  if(n>=1)
  {
    cout<<n<<endl;
    linear1(n-1);
  }
}
void Name(int i)
{
  if(i!=5)
  {
    cout<<"Kaustubh"<<endl;
    Name(i+1);
  }
}
int main() {
//  int i=0;
 // Name(i);
//linear(1,5);
  linear1(6);
}