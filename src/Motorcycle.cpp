//
// Created by Owner on 8/6/2024.
//
// Motorcycle.cpp

#include "../include/Motorcycle.h"

namespace VDMS {

    Motorcycle::Motorcycle(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, bool sidecar)
        : Vehicle(vin, manufacturer, model, year), hasSidecar(sidecar) {}

    void Motorcycle::displayInfo() const {
        std::cout << "Motorcycle - VIN: " << VIN << ", Manufacturer: " << manufacturer << ", Model: " << model << ", Year: " << year
                  << ", Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }

    double Motorcycle::estimateServiceCost(ServiceType service) const {
        switch (service) {
            case ServiceType::OilChange:
                return 40.0;
            case ServiceType::Inspection:
                return 60.0;
            case ServiceType::TireRotation:
                return 80.0;
            default:
                return 0.0;
        }
    }
}
