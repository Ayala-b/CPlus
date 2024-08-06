//
// Created by Owner on 8/6/2024.
//

// Truck.h

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    private:
        double loadCapacity;

    public:
        Truck(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, double capacity);
        virtual void displayInfo() const override;
        virtual double estimateServiceCost(ServiceType service) const override;
    };

}

#endif // TRUCK_H


