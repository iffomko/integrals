#include <iostream>
#include <fstream>
#include <cmath>
#include "integralTrapezoid/integralTrapezoid.h"
#include "leftIntegral/leftIntegral.h"
#include "rightIntegral/rightIntegral.h"

double f1(double x) {
    return x;
}

double f2(double x) {
    return (x * x - 1);
}

double f3(double x) {
    return exp(sin(x * x + 5));
}

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\integrals\\input.txt");

    if (!fin) {
        std::cout << "Failed reading file with error\n";
        return 1;
    } else {
        int a, b, method, func;
        double eps;

        tf curMethod = nullptr;
        temp curFunc = nullptr;

        fin >> a >> b >> eps >> func >> method;

        switch (func) {
            case 1: {
                curFunc = f1;
                break;
            }
            case 2: {
                curFunc = f2;
                break;
            }
            case 3: {
                curFunc = f3;
                break;
            }
            default:
                break;
        }

        switch (method) {
            case 1: {
                curMethod = leftIntegral;
                break;
            }
            case 2: {
                curMethod = rightIntegral;
                break;
            }
            case 3: {
                curMethod = integralTrapezoid;
                break;
            }
            default:
                break;
        }

        std::cout << "Output: " << curMethod(a, b, eps, curFunc) << std::endl;
    }

    fin.close();

    return 0;
}
