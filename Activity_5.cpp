#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;
    
    cout << "===== UNIT CONVERSION MENU =====" << endl;
    cout << "1. Convert volts to millivolts" << endl;
    cout << "2. Convert amperes to milliamperes" << endl;
    cout << "3. Convert kilowatts to watts" << endl;
    cout << "4. Convert ohms to kilo-ohms" << endl;
    cout << "=================================" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter voltage in volts: ";
            cin >> value;
            result = value * 1000;
            cout << value << " V = " << result << " mV" << endl;
            break;
        case 2:
            cout << "Enter current in amperes: ";
            cin >> value;
            result = value * 1000;
            cout << value << " A = " << result << " mA" << endl;
            break;
        case 3:
            cout << "Enter power in kilowatts: ";
            cin >> value;
            result = value * 1000;
            cout << value << " kW = " << result << " W" << endl;
            break;
        case 4:
            cout << "Enter resistance in ohms: ";
            cin >> value;
            result = value / 1000;
            cout << value << " O = " << result << " kO" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}