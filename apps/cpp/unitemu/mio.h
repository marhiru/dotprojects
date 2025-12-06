#include <cstdio>
#include <ostream>
#include <string_view>
#include <utility>

#ifndef MIO_H
#define MIO_H

template <typename... T>
int println(const char *fmt, T &&...arg) {
  if constexpr (sizeof...(T) != 0) {
    const int n = std::printf(fmt, std::forward<T>(arg)...);
    std::putchar('\n');
    return n + 1;
  }
  return std::fputs(fmt, stdout) + std::putchar('\n');
}
inline int println(std::string_view sv) {
  return std::fputs(sv.data(), stdout) + std::putchar('\n');
}

#endif // MIO_H
