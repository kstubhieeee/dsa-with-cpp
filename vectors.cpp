#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void vecExp() {
  vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};

  cout << v[0].second << endl;
  cout << v[1].first << endl;
  cout << v[2].second;
}

void Iterator() {
  vector<int> x = {5, 6, 7, 8, 9, 10};

  // iterator syntax
  vector<int>::iterator it =  x.begin(); // begin points to the first memory address
  cout << *(it) << endl;

  it++;
  cout << *(it) << endl;

  it = it + 3;
  cout << *(it) << endl;

  it = x.end(); // end points to the next memory address of the last element
  it--;
  cout << *(it)<<endl;

  // back()
  cout<<x.back();
}

void forIter()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};
  vector<int>::iterator i;
  for(i=x.begin();i!=x.end();i++)
    {
      cout<<*(i)<<" ";
    }
}

void autoIter()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};
  
  for(auto i=x.begin();i!=x.end();i++)
    {
      cout<<*(i)<<" ";
    }
}

void forEachIter()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};

  for(auto i:x)
    {
      cout<<i<<" ";
    }
}

void deleteIter()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};
  x.erase(x.begin()+1,x.begin()+4);
  for(auto i:x)
  {
    cout<<i<<" ";
  }
}

void Insertion()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};
  x.insert(x.begin()+4,68);
  x.insert(x.begin()+1,2,20);
  for(auto i:x)
  {
    cout<<i<<" ";
  }
}

void otherFunc()
{
  vector<int> x = {5, 6, 7, 8, 9, 10};
  vector<int> y = {1,2,3,4};
  
  // cout<<x.size()<<endl;
  // x.pop_back();
  // x.swap(y);
  // x.clear();
  cout<<x.empty()<<endl; //returns 0 when not empty and 1 when empty
  for(auto i:x)
  {
    cout<<i<<" ";
  }
}

int main() {

  // vecExp();
  // Iterator();
  // forIter();
  // autoIter();
  // forEachIter();
  // deleteIter();
  // Insertion();
  otherFunc();
  return 0;
}