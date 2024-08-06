//
// Created by Owner on 8/6/2024.
//

// Motorcycle.h

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;

    public:
        Motorcycle(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, bool sidecar);
        virtual void displayInfo() const override;
        virtual double estimateServiceCost(ServiceType service) const override;
    };

}

#endif // MOTORCYCLE_H

