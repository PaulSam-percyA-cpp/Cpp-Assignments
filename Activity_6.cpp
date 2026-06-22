#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage;
    double turnsRatio;
    
    cout << "===== TRANSFORMER RATIO CALCULATOR =====" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "========================================" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "\n--- Calculate Turns Ratio ---" << endl;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;
            
            if (secondaryTurns == 0) {
                cout << "Error: Secondary Turns cannot be zero!" << endl;
            } else {
                turnsRatio = primaryTurns / secondaryTurns;
                cout << "Turns Ratio = " << turnsRatio << endl;
            }
            break;
            
        case 2:
            cout << "\n--- Calculate Secondary Voltage ---" << endl;
            cout << "Enter Primary Voltage (V): ";
            cin >> primaryVoltage;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            
            if (primaryTurns == 0) {
                cout << "Error: Primary Turns cannot be zero!" << endl;
            } else {
                secondaryVoltage = primaryVoltage * secondaryTurns / primaryTurns;
                cout << "Secondary Voltage = " << secondaryVoltage << " V" << endl;
            }
            break;
            
        case 3:
            cout << "\n--- Calculate Primary Voltage ---" << endl;
            cout << "Enter Secondary Voltage (V): ";
            cin >> secondaryVoltage;
            cout << "Enter Primary Turns: ";
            cin >> primaryTurns;
            cout << "Enter Secondary Turns: ";
            cin >> secondaryTurns;
            
            if (secondaryTurns == 0) {
                cout << "Error: Secondary Turns cannot be zero!" << endl;
            } else {
                primaryVoltage = secondaryVoltage * primaryTurns / secondaryTurns;
                cout << "Primary Voltage = " << primaryVoltage << " V" << endl;
            }
            break;
            
        default:
            cout << "Invalid choice! Please select 1, 2, or 3." << endl;
    }
    
    return 0;
}