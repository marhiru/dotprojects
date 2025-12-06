
#ifndef MIO_H

#define MIO_H
#include <cstdio>
#include <format>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string_view>
#include <type_traits>

namespace mio {

template <typename Char> class basic_printf_context {
private:
  basic_appender<Char> out_;
  basic_format_args<basic_printf_content> args_;

  static_assert(std::is_same<Char, char>::value ||
                    std::is_same<Char, wchar_t>::value,
                "Unsupported code unit type.");

public:
  using char_type = Char;
};

template <typename Char> struct vprintf_args {
  using type = std::basic_format_args<basic_printf_context<Char>>;
};

template <typename Char>
auto vfprintf(std::FILE *__restrict f, std::basic_string_view<Char> fmt,
              typename vprintf_args<Char>::type args) -> int {
  auto buf = basic_memory_buffer<Char>();
  std::vfprintf(buf, fmt, args);
};

} // namespace mio

#endif // MIO_H
