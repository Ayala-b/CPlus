//
// Created by Owner on 8/6/2024.
//
// Car.cpp

#include "../include/Car.h"

namespace VDMS {

    Car::Car(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, int doors)
        : Vehicle(vin, manufacturer, model, year), numberOfDoors(doors) {}

    void Car::displayInfo() const {
        std::cout << "Car - VIN: " << VIN << ", Manufacturer: " << manufacturer << ", Model: " << model << ", Year: " << year
                  << ", Doors: " << numberOfDoors << std::endl;
    }

    double Car::estimateServiceCost(ServiceType service) const {
        switch (service) {
            case ServiceType::OilChange:
                return 50.0;
            case ServiceType::Inspection:
                return 75.0;
            case ServiceType::TireRotation:
                return 100.0;
            default:
                return 0.0;
        }
    }
}
