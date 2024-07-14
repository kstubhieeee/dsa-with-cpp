#include <iostream>
using namespace std;
int main() {
 /*
 int age;
  cout << "Enter your age";
  cin >> age;
  if (age >= 18) {
    cout << "adult";
  } else {
    cout << "not an adult";
  }
  */
  
  int marks;
  cout << "Enter your marks:";
  cin>>marks;
  if(marks<=100 && marks >=80)
  {
    cout<<"Grade A";
  }
  else if(marks<=79 && marks >=60)
  {
    cout<<"Grade B";
  }
  else if(marks<=59 && marks >=50)
  {
    cout<<"Grade C";
  }
  else if(marks<=49 && marks >=45)
  {
    cout<<"Grade D";
  }
  else if(marks<=44 && marks >=25)
  {
    cout<<"Grade E";
  }
  else{
    cout<<"Grade F";
  }
}