#include <iostream>

int main() {
  int c{5};
  int t{3};

  for (int i{0}; i < 5; i++) {

    for (int j{4}; j > i; j--) {
      std::cout << " ";
    }

    if (i == 0 || i == 4)
      std::cout << c << "-";

    if (i != 4 && i != 0)
      std::cout << "/";

    for (int j{0}; j < i; j++) {
      if (i != 4)
        std::cout << " " << " ";

      if (i == 4)
        std::cout << "-" << "-";
    }

    if (i == 0 || i == 4)
      std::cout << c;

    if (i != 4 && i != 0)
      std::cout << " " << "\\";

    std::cout << "\n";

    c -= 1;
  }

  return 0;
}
