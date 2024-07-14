#include <iostream>
#include <string.h>
using namespace std;

void name(string s)
{
  s[0]='W';
  s[1]='@';
  cout<<"The value in function is : "<<s<<endl;
}
int main() {
  string s;
  cin>>s;
  name(s);
  cout<<"The value in the main is: "<<s;
  return 0;
}