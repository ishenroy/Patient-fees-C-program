// PatientAccount.cpp
#include "PatientAccount.hpp"

PatientAccount::PatientAccount(int days, float rate) : days(days), dailyRate(rate), totalCharges(0) {}

void PatientAccount::updateCharges(float charge) {
    totalCharges += charge;
}

float PatientAccount::getTotalCharges() const {
    return totalCharges + (days * dailyRate);
}
