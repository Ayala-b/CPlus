Vehicle Management System: A C++ Object-Oriented Design Showcase
Project Overview
This Vehicle Management System demonstrates advanced C++ programming concepts through a practical application simulating a vehicle service management scenario. The project showcases object-oriented design principles, emphasizing inheritance, polymorphism, and encapsulation.
Key Components
1. Vehicle Base Class
The Vehicle class serves as the foundation of the system:

Utilizes pure virtual functions for polymorphic behavior
Implements a static member to track the total number of vehicles
Demonstrates proper memory management with custom copy constructor and assignment operator

2. Specialized Vehicle Classes
Derived classes (Car, Truck, Motorcycle) extend the base Vehicle class:

Each class adds unique attributes (e.g., number of doors for cars, load capacity for trucks)
Overrides virtual functions to provide specific implementations

3. Service Management
The ServiceStation class manages service requests:

Employs a queue to handle service orders
Implements a priority system for different service types
Demonstrates use of STL containers and algorithms

4. Namespace Usage
The entire system is encapsulated within the VDMS (Vehicle Dealership Management System) namespace, showing good practice in avoiding naming conflicts.
C++ Features Showcased

Inheritance and Polymorphism: Demonstrated through the vehicle class hierarchy
Virtual Functions: Used for dynamic dispatch in service cost estimation and info display
STL Containers: Utilization of queue and vector in the ServiceStation class
Lambda Functions: Employed in the service prioritization algorithm
Enumerations: Used for defining service types
Static Members and Functions: For tracking and displaying vehicle count
Const Correctness: Applied throughout the system for robust design

Build System
The project uses CMake for cross-platform build management, demonstrating modern C++ project organization practices.
Main Program Flow
The main.cpp file illustrates the system's capabilities:

Creates various vehicle instances
Demonstrates polymorphic behavior through a common interface
Simulates a series of service requests and their processing

Extensibility
The design allows for easy addition of new vehicle types or service operations, showcasing the flexibility of the object-oriented approach.
This Vehicle Management System serves as an excellent example of applying theoretical C++ concepts to a practical, real-world scenario, suitable for educational purposes or as a foundation for more complex systems.
