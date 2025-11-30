
#include "io.hpp"
struct CPU {
  using Byte = unsigned char;
  using Word = unsigned short;

  Word PC;
  Word SP;

  Byte A, X, Y;
};

int main() {
  io::println("Teste IO library com o println");

  return 0;
}
