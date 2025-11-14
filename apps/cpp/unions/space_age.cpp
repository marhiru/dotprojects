#include "space_age.h"
#include <cstdio>
#include <string>

class Planets {
public:
    std::string planet;
    double delta;

    const double period = 365.2425;
    
    Planets() : planet("Unknown"), delta(0.0);
    Planets(std::string p, double d) : planet(p), delta(d);
};

// float PeriodInSeconds(long long *seconds) {
//     float ages = static_cast<float>(days) / 60 / 60 / 24;
//
//     return ages;
// }

int main() {
    Planets planets[8] = {
        Planets("earth", 1.0 * period),
        Planets("mercury", 0.2408467 * period),
        Planets("venus", 0.61519726 * period),
        Planets("mars", 1.8808158 * period),
        Planets("jupiter", 11.862615 * period),
        Planets("saturn", 29.447498 * period),
        Planets("uranus", 84.016846 * period),
        Planets("neptune", 164.79132 * period),
    };

    for (int i = 0; i < 8; i++) {
        std::printf("%f", planets[i]);
    }

    return 0;
}
