#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;
    
    cout << "===== OHM'S LAW CALCULATOR =====" << endl;
    cout << "Resistance = Voltage / Current" << endl;
    cout << "================================" << endl;
    cout << endl;
    
    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;
        
        if (current != 0) {
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " O" << endl;
        } else {
            cout << "Error: Current cannot be zero!" << endl;
        }
        
        cout << "\nDo you want to continue? (Y/N): ";
        cin >> choice;
        cout << endl;
        
    } while (choice == 'Y' || choice == 'y');
    
    cout << "Program ended." << endl;
    
    return 0;
}