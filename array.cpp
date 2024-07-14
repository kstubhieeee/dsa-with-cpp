#include <iostream>
using namespace std;
int main() {
  int i, arr[6];
  for (i = 0; i <= 5; i++) {
    arr[i] = i + 10;
  }
  arr[4]=23;
  for (i = 0; i <= 5; i++) {
    cout << " " << arr[i];
  }
}