#include <iostream>
using namespace std;

int main() {
    double value;
    int choice;

    // Constants for conversion
    const double MILE_TO_KM = 1.60934;
    const double KM_TO_M = 1000;
    const double M_TO_FEET = 3.28084;

    double meters;

    cout << "Enter the distance: ";
    cin >> value;      // Taking input distance from user

    cout << "\nSelect the input unit:\n";
    cout << "1. Miles\n";
    cout << "2. Kilometers\n";
    cout << "3. Meters\n";
    cout << "4. Feet\n";
    cout << "Enter choice: ";
    cin >> choice;        // Showing menu to select the input unit

    switch (choice) {              // Convert input to meters first based on unit selected
        case 1:
            meters = value * MILE_TO_KM * KM_TO_M;
            break;
        case 2:
            meters = value * KM_TO_M;
            break;
        case 3:
            meters = value;
            break;
        case 4:
            meters = value / M_TO_FEET;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    double kilometers = meters / KM_TO_M;
    double miles = kilometers / MILE_TO_KM;
    double feet = meters * M_TO_FEET;            // Convert meters to kilometers, miles and feet

    cout << "\nConverted Values:\n";             // Display all converted values
    cout << "Miles: " << miles << endl;
    cout << "Kilometers: " << kilometers << endl;
    cout << "Meters: " << meters << endl;
    cout << "Feet: " << feet << endl;

    return 0;
}









