//
// Created by Owner on 8/6/2024.
//
// Truck.cpp

#include "../include/Truck.h"

namespace VDMS {

    Truck::Truck(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, double capacity)
        : Vehicle(vin, manufacturer, model, year), loadCapacity(capacity) {}

    void Truck::displayInfo() const {
        std::cout << "Truck - VIN: " << VIN << ", Manufacturer: " << manufacturer << ", Model: " << model << ", Year: " << year
                  << ", Load Capacity: " << loadCapacity << " tons" << std::endl;
    }

    double Truck::estimateServiceCost(ServiceType service) const {
        switch (service) {
            case ServiceType::OilChange:
                return 80.0;
            case ServiceType::Inspection:
                return 100.0;
            case ServiceType::TireRotation:
                return 120.0;
            default:
                return 0.0;
        }
    }
}

