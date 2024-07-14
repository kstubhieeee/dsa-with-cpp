#include <iostream>
#include <utility>
using namespace std;
int main() {
  // pairs
  pair<int, int> p = {6, 7};
  cout << p.first << endl;

  // nested pairs
  pair<int, pair<int, int>> x = {6, {7, 8}};
  cout << x.second.first << endl;

  // pairs with arrays
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[1].first << " ";
  cout << arr[2].second;

  return 0;
}