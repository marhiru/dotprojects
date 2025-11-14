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

long long PeriodInSeconds(float days) {
  long long seconds = static_cast<long long>(days) * 24 * 60 * 60;

  return 0;
}

int main() {
  Planets planets;
  PlanetsDelta delta;
  std::printf("%f", delta.mars);
  int age;

  return 0;
}
