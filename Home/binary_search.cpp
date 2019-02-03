#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool m (int i,int j) { return (i<j); }

int main () {
  int a[] = {1,2,3,4,5,4,3,2,1};
  vector<int> v(a,a+9);

  sort (v.begin(), v.end());
  int x;
  cin >> x;
  int g;
  cin >> g;

  cout << "Ищу переменную " << x << endl;
  if (binary_search (v.begin(), v.end(), g))
    cout << "Найдено!\n";
  else
    cout << "Не найдено.\n";

  sort (v.begin(), v.end(), m);

  cout << "Ищу переменную " <<  g << endl;
  if (binary_search (v.begin(), v.end(), x, m))
    cout << "Найдено!\n";
  else
    cout << "Не найдено.\n";

  return 0;
}