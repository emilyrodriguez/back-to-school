// Emily Rodriguez
// Assignment #10
// April 1, 2018

#include <iostream>
#include <iomanip>
using namespace std;

int getPatientType();
double calcCharges(int, double, double, double);
double calcCharges(double, double);

int main() {
    int patientStatus = getPatientType();
    int numDays = 0;
    double dailyRate = 0, medCharge, servicesCharge, total;

    if (patientStatus == 1) {
        cout << "How many days was the patient in the hospital? ";
        cin >> numDays;
        while (numDays < 0) {
            cout << "Invalid entry, only positive numbers are allowed!\n";
            cout << "How many days was the patient in the hospital? ";
            cin >> numDays;
        }
        cout << "Enter the daily rate of in-patient care: ";
        cin >> dailyRate;
        while (dailyRate < 0) {
            cout << "Invalid entry, only positive numbers are allowed!\n";
            cout << "Enter the daily rate of in-patient care: ";
            cin >> dailyRate;
        }
    }

    cout << "Enter medication charges: ";
    cin >> medCharge;
    while (medCharge < 0) {
        cout << "Invalid entry, only positive numbers are allowed!\n";
        cout << "Enter medication charges: ";
        cin >> medCharge;
    }

    cout << "Enter services charge: ";
    cin >> servicesCharge;
    while (servicesCharge < 0) {
        cout << "Invalid entry, only positive numbers are allowed!\n";
        cout << "Enter services charge: ";
        cin >> servicesCharge;
    }
    
    if (patientStatus == 1) {
        total = calcCharges(numDays, dailyRate, medCharge, servicesCharge);
    } else {
        total = calcCharges(medCharge, servicesCharge);
    }
    
    if (patientStatus == 1) {
        cout << "Patient Status: In-patient\n";
        cout << "Days in hospital: " << numDays << endl;
        cout << "Daily Rate: $" <<  dailyRate << endl;
    } else {
        cout << "Patient Status: Out-patient\n";
    }
    cout << "Medication Charge: $" <<  medCharge << endl;
    cout << "Hospital Services Charge: $" <<  servicesCharge << endl;
    cout << setprecision(2) << fixed;
    cout << "Total: $" << total << endl;
    system("PAUSE");
    return 0;
}

int getPatientType() {
    int patientStatus;
    cout << "Was the patient admitted as an in-patient or an out-patient?\n 1. In-patient\n 2. Out-patient\n";
    cin >> patientStatus;
    
    while (patientStatus < 0) {
        cout << "Invalid entry" << endl;
        cout << "Was the patient admitted as an in-patient or an out-patient?\n 1. In-patient\n 2. Out-patient\n";
        cin >> patientStatus;
    }
    return patientStatus;
}

//inpatient
double calcCharges(int numDays, double dailyRate, double medCharge, double servicesCharge) {
    return ((numDays * dailyRate) + medCharge + servicesCharge);
}
// outpatient
double calcCharges(double medCharge, double servicesCharge) {
    return (medCharge + servicesCharge);
}
