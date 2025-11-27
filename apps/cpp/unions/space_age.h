#ifndef SPACE_AGE_H
#define SPACE_AGE_H
#include <map>
#include <string>
#define EARTH_PERIOD 365.2425

namespace space_age {
void secondsToAges(long long seconds);

enum class PlanetID {
  MERCURY,
  VENUS,
  EARTH,
  MARS,
  JUPITER,
  SATURN,
  URANUS,
  NEPTUNE
};

struct Planet {
  std::string name;
  double orbital_exp;
};

inline const std::map<PlanetID, Planet> Planet = {
    {PlanetID::MERCURY, {"Mercury", 0.2408467}},
    {PlanetID::VENUS, {"Venus", 0.61519726}},
    {PlanetID::EARTH, {"Earth", 1.0}},
    {PlanetID::MARS, {"Mars", 1.8808158}},
    {PlanetID::JUPITER, {"Jupiter", 11.862615}},
    {PlanetID::SATURN, {"Saturn", 29.447498}},
    {PlanetID::URANUS, {"Uranus", 84.016846}},
    {PlanetID::NEPTUNE, {"Neptune", 164.79132}}};

inline double get_exp(PlanetID planet_id) {
  return Planet.at(planet_id).orbital_exp;
}

class Planets {
public:
  std::string planet;
  float period;

  Planets() : planet(""), period(0.0) {}

  Planets(const std::string &p, float d) : planet(p), period(d) {}
};

} // namespace space_age

#endif // !SPACE_AGE_H
