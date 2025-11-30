#include "io.h"

struct CPU {
  using Byte = unsigned char;
  using Word = unsigned short;

  Word PC;
  Word SP;

  Byte A, X, Y;
};

int main() {
  io::println("teste");
  return 0;
}
