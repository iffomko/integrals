#include <iostream>
#include "integralTrapezoid/integralTrapezoid.h"
#include "leftIntegral/leftIntegral.h"
#include "rightIntegral/rightIntegral.h"

double f1(double x) {
    return (x * x * x - x - 9);
}

double f2(double x) {
    return (sin(x) - 1);
}

double f3(double x) {
    return (x + 2);
}

double test(double x) {
    return x;
} // output on [1, 3]: 4

int main() {
    std::cout << integralTrapezoid(1, 3, 0.00001, test) << std::endl;
    std::cout << leftIntegral(1, 3, 0.00001, test) << std::endl;
    std::cout << rightIntegral(1, 3, 0.00001, test) << std::endl;
    
    return 0;
}
