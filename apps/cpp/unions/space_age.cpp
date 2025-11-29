#include "space_age.h"
#include <iomanip>
#include <iostream>
#include <string>

namespace space_age {
const double EARTH_SECONDS_PER_YEAR = 31557600.0;

void secondsToAges(long long seconds) {
  const double earth_years_base =
      static_cast<double>(seconds) / EARTH_SECONDS_PER_YEAR;

  std::cout << "Your age would be (in Earth years: " << std::fixed
            << std::setprecision(2) << earth_years_base << "):\n";
  std::cout << "--------------------------------\n";

  for (const auto &pair : Planet) {
    const std::string &planet_name = pair.second.name;
    const double period_multiplier = pair.second.orbital_exp;

    double planet_age = earth_years_base / period_multiplier;

    std::cout << std::left << std::setw(10) << planet_name << ": " << std::right
              << std::setprecision(4) << planet_age << " years\n";
  }
}

double calculate_age(long long seconds, PlanetID planet_id) {
  double period_multiplier = get_exp(planet_id);
  double earth_years = static_cast<double>(seconds) / EARTH_SECONDS_PER_YEAR;
  return earth_years / period_multiplier;
}

} // namespace space_age

int main() {
  space_age::secondsToAges(100000LL);
  return 0;
}
