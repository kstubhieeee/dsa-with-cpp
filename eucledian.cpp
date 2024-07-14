#include <iostream>
#include <string.h>
using namespace std;

void extractor()
{
int x,n;
  cin>>x;
  while(x!=0)
    {
      n=x%10;
      cout<<n<<endl;
      x=x/10;
      
    }
}

int countDigits(int n){
  int count = 0;
  int originalN = n;
  int digit;

  while (n != 0) {
      digit = n % 10;
      if (digit != 0 && originalN % digit == 0) {
          count++;
      }
      n = n / 10;
  }

  return count;
}

void reverse()
{
  int n,x;
  string a="";
  cin>>n;
  int y=n;
  if(n<0)
  {
    n=n*-1;
  }
  while(n!=0)
    {
      x=n%10;
      a=a+to_string(x);
      n=n/10;
    }
  if(a[a.length()-1]=='0')
  {
    a[a.length()-1]=' ';
  }
  x= stoi(a);
  if(y<0)
  {
    x=x*-1;
    cout<<x;
  }
  else
  {
    cout<<x;
  }
}

  void Palindrome()
  {
    string a;
    cin>>a;
   int j=a.length()-1;
    int i=0;
    int flag=1; //palindrome
  while(i<=j)
  {
  if(a[i]==a[j])
  {
    i++;
    j--;
  }
    else
  {
    flag=0; //not a palindrome
    break;
  }
   }
    if(flag==1)
    {
      cout<<"Palindrome";
    }
    else{
cout<<"not a palindrome";
    }
  }

void Armstrong()
{
  int n;
  cin>>n;
  int z=n;
int x=n;
  int y=0;
  while(n>0)
    {
      x=n%10;
      y=y+x*x*x;
      n=n/10;
    }
  if(z==y)
    cout<<"Armstrong number";
  else
cout<<"not an armstrong number";
}

void divisors()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        cout<<i<<endl;
      }
    }
}
 void gcd()
{
  int n1,n2;
  cin>>n1;
  cin>>n2;
  int gcd;
  for(int i=1;i<=min(n1,n2);i++)
    {
      if(n1%i==0 && n2%i==0)
      {
         gcd=i;
      }
    }
  cout<<gcd;
}

int main() {
// extractor();  
// int x=countDigits(660);
//   cout<<x;
// reverse();
// Palindrome();
// Armstrong ();
// divisors();
  gcd();
}