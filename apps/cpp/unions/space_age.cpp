#include <array>
#include <iomanip>
#include <iostream>
#include <string>

#define EARTH_PERIOD 365.2425

class Planets {
public:
  std::string planet;
  float period;

  Planets() : planet(""), period(0.0) {}

  Planets(const std::string &p, float d) : planet(p), period(d) {}
};

void secondsToAges(long long seconds) {
  const long long EARTH_PERIOD_SECONDS = EARTH_PERIOD * 24.0 * 60.0 * 60.0;
  const double ages = static_cast<double>(seconds) / EARTH_PERIOD_SECONDS;

  std::array<Planets, 8> planets = {
      Planets("mercury", 0.2408467 * EARTH_PERIOD),
      Planets("venus", 0.61519726 * EARTH_PERIOD),
      Planets("earth", 1.0 * EARTH_PERIOD),
      Planets("mars", 1.8808158 * EARTH_PERIOD),
      Planets("jupiter", 11.862615 * EARTH_PERIOD),
      Planets("saturn", 29.447498 * EARTH_PERIOD),
      Planets("uranus", 84.016846 * EARTH_PERIOD),
      Planets("neptune", 164.79132 * EARTH_PERIOD),
  };

  int i = 0;
  std::cout << "Your age would be:" << std::endl;

  for (const auto &p : planets) {
    double planet_age = ages / p.period;

    std::cout << std::left << std::setw(10) << p.planet << ": " << std::fixed
              << std::setprecision(2) << planet_age << " years" << std::endl;
  }
}

int main() {
  secondsToAges(31600000);
  return 0;
}
