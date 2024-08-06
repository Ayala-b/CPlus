#include <iostream>
#include "./include/Vehicle.h"
#include "./include/Car.h"
#include "./include/Truck.h"
#include "./include/Motorcycle.h"
#include "./include/ServiceStation.h"

// Function to display service cost
void displayServiceCost(VDMS::Vehicle* vehicle, VDMS::ServiceType service) {
    std::cout << "Service Cost for " << vehicle->getModel() << ": " << vehicle->estimateServiceCost(service) << std::endl;
}

int main() {
    using namespace VDMS;

    // Create vehicles
    Car car1("1HGCM82633A004352", "Toyota", "Camry", 2020, 4);
    Truck truck1("2FTRX18W1XCA12345", "Ford", "F-150", 2018, 2.5);
    Motorcycle motorcycle1("JH2SC5901AK123456", "Honda", "CBR600RR", 2022, false);
    Car car2("2T1BURHE0JC083076", "Honda", "Civic", 2021, 4);
    Truck truck2("3C6TR5CJ7GG246874", "Ram", "2500", 2019, 3.0);
    Motorcycle motorcycle2("1HD1KB410CB643725", "Harley-Davidson", "Street Glide", 2020, true);
    Car car3("5N1DR2MM8LC672100", "Nissan", "Rogue", 2022, 5);
    Truck truck3("1FTRX18W2XFC52948", "Chevrolet", "Silverado", 2017, 3.5);

    // Display vehicle count
    Vehicle::displayVehicleCount(); // Static function to display vehicle count

    // Create service station
    ServiceStation station;

    // Service requests
    station.requestService(&car1, ServiceType::OilChange);
    station.requestService(&truck1, ServiceType::Inspection);
    station.requestService(&motorcycle1, ServiceType::TireRotation);
    station.requestService(&car2, ServiceType::Inspection);
    station.requestService(&truck2, ServiceType::OilChange);
    station.requestService(&motorcycle2, ServiceType::TireRotation);
    station.requestService(&car3, ServiceType::OilChange);
    station.requestService(&truck3, ServiceType::Inspection);

    // Process services
    station.processServices();
    station.prioritizeServices();

    // Display vehicle count after service
    Vehicle::displayVehicleCount(); // Static function to display vehicle count

    return 0;
}


