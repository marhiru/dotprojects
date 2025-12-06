#include "mio.h"
#include <cstdio>

int main() {
  using mio::println;
  std::string teste{"string"};
  println("Teste IO {%s} library com o println", teste);

  return 0;
}
