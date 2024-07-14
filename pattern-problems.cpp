#include <iostream>
using namespace std;
void print1()
{
  int i,j;
  for(i=0;i<5;i++)
    {
   //blank spaces
      for(j=0;j<5-i-1;j++)
        {
         cout<<" ";
        }
    //stars
      for(j=0;j<2*i+1;j++)
      {
       cout<<"*";
      }
      cout<<endl;
    }
}
void print2()
{
  int i,j;
  for(i=5;i>0;i--)
    {
   //blank spaces
      for(j=0;j<5-i;j++)
        {
         cout<<" ";
        }
    //stars
      for(j=0;j<2*i-1;j++)
      {
       cout<<"*";
      }
      

      cout<<endl;
    }
}

void print3()
{
  int i,j;
  for(i=0;i<5;i++)
    {
      for(j=0;j<i;j++)
        {
          cout<<"*";
        }
      cout<<endl;
    }
}

void print4()
{
  int i,j;
  for(i=5;i>0;i--)
    {
      for(j=0;j<i;j++)
        {
          cout<<"*";
        }
      cout<<endl;
    }
}

void print5()
{
  int i,j;
  for(i=0;i<5;i++)
    {
      int start=1;
      if(i%2==0)
        start=1;
      else
        start=0;
    for(j=0;j<=i;j++)
      {
        cout<<start<<" ";
        start=1-start;
      }
      cout<<endl;
    }
}

void print6()
{
  int i,j;
  int space=2*(4-1);
  for(i=1;i<=4;i++)
    {
      
      for(j=1;j<=i;j++)
        {
          cout<<j;
        }
      for(j=1;j<=space;j++)
        {
          cout<<" ";
        }

      for(j=i;j>=1;j--)
        {
          cout<<j;
        }
 
      cout<<endl;
  space=space-2;
    }
  
}

void print7()
{
  int i,j;
  int var=1;
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        {
          cout<<var<<" ";
          var=var+1;
        }
      cout<<endl;
    }
}

void print8()
{
  int j;
  char i;
  int add=1;
  for(i='A';i<='E';i++)
    {
      for(j=1;j<=add;j++)
        {
          cout<<i<<" ";
        }
      cout<<endl;
      add=add+1;
    }
}

void print9()
{
int i,j;
  
  for(i=0;i<4;i++)
    {
      int breakpoint=(2*i+1)/2;
      char a='A';
      for(j=0;j<=4-i-1;j++)
        {
          cout<<" ";
        }
      for(j=1;j<=2*i+1;j++)
        {
          cout<<a;
          if(j<=breakpoint)
            a++;
          else
          a--;
        }
      cout<<endl;
      
    }
    
}

void print10()
{
  int i;
  int j;
  for(i=0;i<5;i++)
    {
      char c='E'-i;
      for(j=0;j<=i;j++)
        {
          cout<<c<<" ";
          c=c+1;
        }
      cout<<endl;
      
    }
}

void print11()
{
  int i,j;
  int space=0;
  for(i=5;i>0;i--)
    {
      for(j=0;j<i;j++)
        {
          cout<<"*";
        }
      for(j=0;j<space;j++)
        {
          cout<<" ";
        }
      for(j=0;j<i;j++)
      {
        cout<<"*";
      }
      cout<<endl;
      space=space+2;
    }
  int s=5+3;
  for(i=0;i<5;i++)
    {
      for(j=0;j<=i;j++)
        {
          cout<<"*";
        }
      for(j=s;j>0;j--)
        {
          cout<<" ";
           
        }
      for(j=0;j<=i;j++)
      {
        cout<<"*";
      }
      cout<<endl;
     s=s-2;
    }
}

void print12()
{
  int i,j;
  int space=5+3;
  for(i=0;i<5;i++)
    {
      for(j=0;j<=i;j++)
        {
          cout<<"*";
        }
      for(j=space;j>0;j--)
        {
          cout<<" ";
        }
      for(j=0;j<=i;j++)
      {
        cout<<"*";
      }
      cout<<endl;
      space=space-2;
    }
  int s=0;
  for(i=4;i>0;i--)
    {
      for(j=i;j>0;j--)
        {
          cout<<"*";
        }
      for(j=0;j<=s+1;j++)
        {
          cout<<" ";
        }
      for(j=i;j>0;j--)
      {
        cout<<"*";
      }
      cout<<endl;
      s=s+2;
    }
}

void print13()
{
  int i,j;
  for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
        {
          if(i==0||j==0||i==4-1||j==4-1)
            cout<<"*";
          
           else
            cout<<" ";
        }
      cout<<endl;
    }
}

void print14()
{
  int i,j;
  for(i=0;i<7;i++)
    {
      for(j=0;j<7;j++)
        {
          if(i==0||j==0||i==7-1||j==7-1)
            cout<<4;
          else if(i==1||j==1||i==7-2||j==7-2)
            cout<<3;
          else if(i==2||j==2||i==7-3||j==7-3)
            cout<<2;
          else
            cout<<1;
        }
      cout<<endl;
    }
}
int main() {
  // print1();
  // print2();
  // print3();
  // print4();
  // print5();
  // print6();
  // print7();
  // print8();
  // print9();
  // print10();
  // print11();
  // print12();
  // print13();
  print14();
}