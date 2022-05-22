cmake_minimum_required(VERSION 3.21)
project(integrals)

set(CMAKE_CXX_STANDARD 14)

add_executable(integrals main.cpp integralTrapezoid/integralTrapezoid.cpp integralTrapezoid/integralTrapezoid.h tf/functionType.h)
