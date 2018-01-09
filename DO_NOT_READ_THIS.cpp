#include <iostream>
#include <memory>
#include <string>
#include <type_traits>

//Purely for this exercise, you should NEVER be doing this in real code.
#include "Polymorphism.cpp"

int main() {
    static_assert(std::is_abstract<Vehicle>::value, "FATAL, Vehicle is not abstract. Your functions must be pure-virtual. This error is coded into the tutorial, your compiler is NOT detecting this.");
    static_assert(std::has_virtual_destructor<Vehicle>::value, "FATAL, Vehicle does not have a virtual destructor. Not compiling because this would leak memory. This error is coded into the tutorial, your compiler is NOT detecting this.");
    bool success = false;
    std::unique_ptr<Vehicle> bus = std::make_unique<Bus>();
    std::unique_ptr<Vehicle> car = std::make_unique<Car>();
    
    const std::string& busType = static_cast<const Vehicle*>(bus.get())->GetType();
    if (busType == "bus")
        std::cout << "bus->GetType() == bus\n  Success!\n";
    else
        std::cout << "bus->GetType() == " << busType << "\n  Failure.\n";
    
    const std::string& carType = static_cast<const Vehicle*>(car.get())->GetType();
    if (carType == "car")
        std::cout << "car->GetType() == car\n  Success!\n";
    else
        std::cout << "car->GetType() == " << carType << "\n  Failure.\n";
    
    auto speed = bus->GetMaxSpeed(false);
    if (speed == 80)
        std::cout << "bus->GetMaxSpeed() == 80\n  Success!\n";
    else
        std::cout << "bus->GetMaxSpeed() == " << speed << "\n  Failure.\n";
    
    speed = car->GetMaxSpeed(true);
    if (speed == 155)
        std::cout << "car->GetMaxSpeed() == 155\n  Success!\n";
    else
        std::cout << "car->GetMaxSpeed() == " << speed << "\n  Failure.\n";
}
