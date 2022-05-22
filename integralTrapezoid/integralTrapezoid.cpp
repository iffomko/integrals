//
// Created by Iluha on 22.05.2022.
//

#include "integralTrapezoid.h"

double integralTrapezoid(double a, double b, double eps, temp f) {
    double sum = (f(a) + f(b)) / 2, prevS = 0, h = b - a, curS = h * sum;

    do {
        prevS = curS;

        for (double x = a + h / 2; x < b; x += h)
            sum += f(x);

        h /= 2;

        curS = (sum * h);
    } while (fabs(curS - prevS) >= eps);

    return curS;
}