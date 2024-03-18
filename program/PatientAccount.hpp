// PatientAccount.hpp
#ifndef PATIENTACCOUNT_HPP
#define PATIENTACCOUNT_HPP

class PatientAccount {
private:
    int days;
    float dailyRate;
    float totalCharges;

public:
    PatientAccount(int days, float rate);

    void updateCharges(float charge);

    float getTotalCharges() const;
};

#endif
