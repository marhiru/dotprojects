#include <iostream>

/*
 * We need are making some algorithm and we need this fields below:
 * (n) = Operations number count O(n)
 * (r) = Final result of algorithm
 * (s) = Initial value (source of truth)
 *
 * Rules about this challenge:
 * (1) = You cannot use any STL resource (Standard library)
 * (2) = Simplicity above all: Use modern c++ concepts while writing simple code
 * (3) =
 */

class Main {
public:
  int n, r, s;
};

int main() {
  Main MyClass;

  for (int i = 0; i < 8; i++) {
    for (int v{0}; v < i; v++) {
    std::cout << i;
  }
  return 0;
}
