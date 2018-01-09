cmake_minimum_required(VERSION 3.2)
project(CppLondonPolymorphism)

add_executable(verifysuccess DO_NOT_READ_THIS.cpp)
set_target_properties(verifysuccess PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED YES
)
