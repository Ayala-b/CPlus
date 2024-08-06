//
// Created by Owner on 8/6/2024.
//
// Car.h

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
    private:
        int numberOfDoors;

    public:
        Car(const std::string& vin, const std::string& manufacturer, const std::string& model, int year, int doors);
        virtual void displayInfo() const override;
        virtual double estimateServiceCost(ServiceType service) const override;
    };

}

#endif // CAR_H


