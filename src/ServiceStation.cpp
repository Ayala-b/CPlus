#include "../include/ServiceStation.h"
#include <algorithm>

namespace VDMS {

    void ServiceStation::requestService(Vehicle* vehicle, ServiceType service) {
        serviceQueue.push(std::make_pair(vehicle, service));
    }

    void ServiceStation::processServices() {
        prioritizeServices(); // Prioritize services before processing
        while (!serviceQueue.empty()) {
            auto serviceRequest = serviceQueue.front();
            serviceQueue.pop();

            Vehicle* vehicle = serviceRequest.first;
            ServiceType service = serviceRequest.second;

            vehicle->displayInfo();
            std::cout << "Service Cost: " << vehicle->estimateServiceCost(service) << std::endl;
        }
    }

    void ServiceStation::prioritizeServices() {
        std::vector<std::pair<Vehicle*, ServiceType>> tempVector;
        while (!serviceQueue.empty()) {
            tempVector.push_back(serviceQueue.front());
            serviceQueue.pop();
        }

        std::sort(tempVector.begin(), tempVector.end(),
            [](const auto& a, const auto& b) {
                return static_cast<int>(a.second) < static_cast<int>(b.second);
            });

        for (const auto& item : tempVector) {
            serviceQueue.push(item);
        }
    }
}
