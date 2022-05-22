//
// Created by Iluha on 22.05.2022.
//

#include "leftIntegral.h"

double leftIntegral(double a, double b, double eps, temp f) {
    double step = b - a, sum = f(a), curSum = sum * step, prevSum = 0;

    do {
        prevSum = curSum;

        for (double x = a + step / 2; x < b; x += step)
            sum += f(x);

        step /= 2;
        curSum = sum * step;
    } while (fabs(curSum - prevSum) >= eps);

    return curSum;
}