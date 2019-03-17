#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

  int x=10, y=20;                              // x:10 y:20
  swap(x,y);                              // x:20 y:10

  vector<int> foo (4,x), bar (6,y);       // foo:4x20 bar:6x10
  swap(foo,bar);                          // foo:6x10 bar:4x20

  cout << "foo contains:";
  for (std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
  cout << ' ' << *it;
  cout << '\n';

  return 0;
}