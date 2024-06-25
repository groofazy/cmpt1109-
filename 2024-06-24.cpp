#include <iostream>
#include <cstring>

using namespace std;

char getPatientType();
double patientCharges(int, double, double, double);
double patientCharges(double, double);

int main()
{
    char patientType;
    int days;
    double roomRate;
    double medication;
    double services;
    double totalCharges;

    patientType = getPatientType();

    if (patientType == 'I')
    {
        cout << "Number of days in the hospital: ";
        cin >> days;
        while (days < 0)
        {
            cout << "Days in hospital must be greater than 0, please re-enter: ";
            cin >> days;
        }
        
        cout << "Room Rate: ";
        cin >> roomRate;
        while (roomRate < 0)
        {
            cout << "Room rate must be greater than 0, please re-enter: ";
            cin >> roomRate;
        }

        cout << "Cost of Medication: ";
        cin >> medication;
        while (medication < 0)
        {
            cout << "Medication cost must be greater than 0, please re-enter: ";
            cin >> medication;
        }

        cout << "Cost of Services: ";
        cin >> services;
        while (services < 0)
        {
            cout << "Services cost must be greater than 0, please re-enter: ";
            cin >> services;
        }

        totalCharges = patientCharges(days, roomRate, medication, services);
        cout << totalCharges;

    }
    
    else
    {
        cout << "Cost of Medication: ";
        cin >> medication;
        while (medication < 0)
        {
            cout << "Medication cost must be greater than 0, please re-enter: ";
            cin >> medication;
        }

        cout << "Cost of Services: ";
        cin >> services;
        while (services < 0)
        {
            cout << "Services cost must be greater than 0, please re-enter: ";
            cin >> services;
        }

        totalCharges = patientCharges(medication, services);
        cout << totalCharges;
    }

}

double patientCharges(int days, double rate, double meds, double services)
{
    double daily_cost = days * rate;
    double total = daily_cost + meds + services;
    return total;
}

double patientCharges(double meds, double services)
{
    double total = meds + services;
    return total;
}

char getPatientType()
{
    char type;
    cout << "This program will compute a patient's hospital charges" << endl;
    cout << "Type O for Outpatient and I for In-Patient: ";
    cin >> type;
    while (type != 'I' && type != 'O')
    {
        cout << "Please re-enter I or O for patient type: ";
        cin >> type;
    }
    return type;
}
