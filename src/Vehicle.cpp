//
// Created by Owner on 8/6/2024.
//
// Vehicle.cpp

#include "../include/Vehicle.h"

namespace VDMS {
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& manufacturer, const std::string& model, int year)
        : VIN(vin), manufacturer(manufacturer), model(model), year(year) {
        ++vehicleCount;
    }

    Vehicle::~Vehicle() {
        --vehicleCount;
    }


    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), manufacturer(other.manufacturer), model(other.model), year(other.year) {
        ++vehicleCount;
    }

    void Vehicle::displayVehicleCount() {
        std::cout << "Total number of vehicles: " << vehicleCount << std::endl;
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount;
    }
    Vehicle& Vehicle::operator=(const Vehicle& other) {
        if (this != &other) {
            VIN = other.VIN;
            manufacturer = other.manufacturer;
            model = other.model;
            year = other.year;

        }
        return *this;
    }

}

