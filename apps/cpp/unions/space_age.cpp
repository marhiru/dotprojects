<<<<<<< HEAD
#include <array>
#include <ios>
#include <iostream>
#include <ostream>
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

    std::cout << std::left << p.planet << ": " << std::right << p.period
              << std::fixed << std::endl;
  }
}

int main() {
  secondsToAges(31600000);
=======
#include <cstdio>

class PlanetsDelta {
public:
  const double earth_period = 365.2425; // One year in earth days equivalent;
  // Orbits delta;
  const float mercury = 0.2408467 * earth_period;
  const float venus = 0.61519726 * earth_period;
  const float earth = 1.0 * earth_period;
  const float mars = 1.8808158 * earth_period;
  const float jupiter = 11.862615 * earth_period;
  const float saturn = 29.447498 * earth_period;
  const float uranus = 84.016846 * earth_period;
  const float neptune = 164.79132 * earth_period;
  ;
};

enum Planets { MERCURY, VENUS, EARTH, MARS, JUPITER, SATURN, URANUS, NEPTUNE };

long long PeriodInSeconds(float *days) {
  long long seconds = static_cast<long long>(days) * 24 * 60 * 60;

  return 0;
}

int main() {
  Planets planets;
  PlanetsDelta delta;
  std::printf("%f", delta.mars);
  int age;

>>>>>>> 3ab743d2b04fc0076cb9476910bb08fae5454ad2
  return 0;
}
