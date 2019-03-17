#include <iostream>
#include <algorithm>
#include <array>

int main () {
  array<int> f{2,4,1,3};

  do {
    // try a new permutation:
    std::prev_permutation(f.begin(),f.end());

    // print range:
    std::cout << "foo:";
    for (int& x:f) std::cout << ' ' << x;
    std::cout << '\n';

  } while (!std::is_sorted(f.begin(),f.end()));

  std::cout << "the range is sorted!\n";

  return 0;
}