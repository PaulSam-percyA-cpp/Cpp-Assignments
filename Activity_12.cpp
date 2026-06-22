#include <iostream>
using namespace std;

int main() {
    double voltage;
    
    cout << "Solar Panel Voltage Tracker" << endl;
    cout << "=============================" << endl;
    cout << "Tracking voltage (Stop when < 18V)" << endl;
    cout << endl;
    
    voltage = 18; // Initialize to enter the loop
    
    while (voltage >= 18) {
        cout << "Enter solar panel voltage (V): ";
        cin >> voltage;
        
        if (voltage < 18) {
            cout << "Solar panel voltage below operating level." << endl;
        } else {
            cout << "Voltage is acceptable. Tracking continues." << endl;
        }
        cout << endl;
    }
    
    cout << "Solar panel voltage tracking stopped." << endl;
    
    return 0;
}