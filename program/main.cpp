#include <iostream>
#include <string>
#include "PatientAccount.hpp"
#include "Surgery.hpp"
#include "Pharmacy.hpp"

int main() {
    int daysInHospital;
    float dailyRate;
    std::cout << "Enter the number of days spent in the hospital: ";
    std::cin >> daysInHospital;
    std::cout << "Enter the daily rate of the hospital: ";
    std::cin >> dailyRate;

    PatientAccount patient(daysInHospital, dailyRate);

    std::string surgeryType, medicationType;
    std::cout << "Enter the type of surgery: ";
    std::cin >> surgeryType;
    patient.updateCharges(Surgery::getCost(surgeryType));

    std::cout << "Enter the type of medication: ";
    std::cin >> medicationType;
    patient.updateCharges(Pharmacy::getCost(medicationType));

    std::cout << "Patient's total charges: $" << patient.getTotalCharges() << std::endl;

    return 0;
}
