//Your task is as follows (note that class/function names are CaSE-SenSItiVe)

// 1. Create a class called Vehicle.

// 2. Vehicle should have two PURE-Virtual member functions:
//    a) "GetType() const" which returns a "const std::string&"
//    b) "GetMaxSpeed(bool isMPH)" which returns an unsigned int.

// 3. Create a class called Car that is derived from Vehicle.

// 4. Car should return "car" when GetType() is called on it.
//      You should store the string on the class since GetType() returns a reference.
// 5. Car should return 155 when GetMaxSpeed(true) is called on it.
// 6. Car should return 249 when GetMaxSpeed(false) is called on it.

// 7. Create a class called Bus that is also derived from Vehicle.

// 8. Bus should return "bus" when GetType() is called on it.
//    Again, you must store the type on the class.
// 9. Bus should return 50 when GetMaxSpeed(true) is called on it.
// A. Bus should return 80 when GetMaxSpeed(false) is called on it.

// If you get stuck, check the "cheats" folder for successively helpful hints.
// All the classes you should need have already been included for you.

//BONUS ASSIGNMENT:
// Refactor your code into separate .h and .cpp files.
// You are allowed to modify impl/DO_NOT_READ_THIS.cpp to make it still compile.
// Changing the CMakeLists.txt will also be required.

//BONUS-BONUS ASSIGNMENT (purely fun, requires arguably stupid tricks):
// Delete your Bus class and make Bus an alias of Car (using/typedef)
// but make it still pass the tests (without modifying them).
