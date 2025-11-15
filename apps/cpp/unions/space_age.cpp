#include <array>
#include <string>

class Planets {
public:
  std::string planet;
  float period;

  Planets() : planet(""), period(0.0) {}

  Planets(const std::string &p, float d) : planet(p), period(d) {}
};

int main() {
  const double earth_period = 365.2425;
  std::array<Planets, 8> planets = {
      Planets("mercury", 0.2408467), Planets("venus", 0.61519726),
      Planets("earth", 1.0),         Planets("mars", 1.8808158),
      Planets("jupiter", 11.862615), Planets("saturn", 29.447498),
      Planets("uranus", 84.016846),  Planets("neptune", 164.79132),
  };

  int i = 0;
  for (const auto &p : planets) {
    std::printf("%s: ", p.planet.c_str());
    std::printf("%f\n", p.period);
  }

  return 0;
}
