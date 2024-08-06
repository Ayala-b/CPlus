//
// Created by Owner on 8/6/2024.
//

// ServiceStation.h

#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include "Vehicle.h"
#include <queue>
#include <vector>

namespace VDMS {

    class ServiceStation {
    private:
        std::queue<std::pair<Vehicle*, ServiceType>> serviceQueue;

    public:
        void requestService(Vehicle* vehicle, ServiceType service);
        void processServices();
        void prioritizeServices();
    };

}

#endif // SERVICESTATION_H
