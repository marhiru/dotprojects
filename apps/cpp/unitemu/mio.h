
#ifndef MIO_H

#define MIO_H
#include <iostream>
#include <ostream>

namespace mio {

inline int println(const char *__restrict argc) {
  std::cout << argc << "\n";
  return 0;
}

} // namespace mio

#endif // MIO_H
