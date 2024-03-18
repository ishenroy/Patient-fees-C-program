// Pharmacy.cpp
#include "Pharmacy.hpp"
#include <iostream>

float Pharmacy::getCost(const std::string& medicationType) {
    if (medicationType == "Aspirin")
        return 10.0;
    else if (medicationType == "Antibiotic")
        return 20.0;
    else if (medicationType == "Painkiller")
        return 15.0;
    else if (medicationType == "Antacid")
        return 8.0;
    else if (medicationType == "Insulin")
        return 50.0;
    else {
        std::cout << "Invalid medication type!" << std::endl;
        return 0.0;
    }
}
