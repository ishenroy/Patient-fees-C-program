// Surgery.cpp
#include "Surgery.hpp"
#include <iostream>

float Surgery::getCost(const std::string& surgeryType) {
    if (surgeryType == "Appendectomy")
        return 5000.0;
    else if (surgeryType == "Laparoscopy")
        return 7000.0;
    else if (surgeryType == "HipReplacement")
        return 10000.0;
    else if (surgeryType == "CataractSurgery")
        return 3000.0;
    else if (surgeryType == "HeartBypass")
        return 15000.0;
    else {
        std::cout << "Invalid surgery type!" << std::endl;
        return 0.0;
    }
}
