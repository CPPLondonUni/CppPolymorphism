//This cheat/hint lays out the basic interface class.

class Vehicle {
public:
    virtual const std::string& GetType() const = 0;
    virtual unsigned int GetMaxSpeed(bool isMPH) = 0;
    virtual ~Vehicle() = default;
};
