//This cheat/hint demonstrates how to create the derived car class.

//Note that no Bus implementation hint is provided. If this isn't enough, ask for help.

class Car : public Vehicle {
    const std::string type{"car"};
public:
    const std::string& GetType() const {
        return type;
    }
    unsigned int GetMaxSpeed(bool isMPH) {
        return isMPH ? 155 : 249;
    }
};
