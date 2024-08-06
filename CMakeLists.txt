cmake_minimum_required(VERSION 3.28)
project(CPlusProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPlusProject main.cpp
        include/Car.h
        include/Motorcycle.h
        include/ServiceStation.h
        include/Truck.h
        include/Vehicle.h
        src/Car.cpp
        src/Motorcycle.cpp
        src/ServiceStation.cpp
        src/Truck.cpp
        src/Vehicle.cpp
        src/Car.cpp
        src/Car.cpp)
