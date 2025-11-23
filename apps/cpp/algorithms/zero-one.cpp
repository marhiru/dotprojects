#include <iostream>

int main() {
  int c{10};

  for (int i{0}; i < 10; ++i) {
    // Left spaces
    for (int j{0}; j < i; j++) {
      std::cout << " ";
    }

    std::cout << c;

    // Right numbers
    for (int p{10}; p > i; p--) {
      std::cout << " " << " ";
    }

    std::cout << c;
    std::cout << "\n";

    c += 1;
  }

  return 0;
}
