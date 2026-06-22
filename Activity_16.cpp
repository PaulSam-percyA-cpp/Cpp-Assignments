#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char choice;
    
    cout << "===== DC POWER CALCULATOR =====" << endl;
    cout << "Power = Voltage × Current" << endl;
    cout << "================================" << endl;
    cout << endl;
    
    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;
        
        power = voltage * current;
        
        cout << "Power = " << power << " W" << endl;
        
        cout << "\nDo you want to continue? (Y/N): ";
        cin >> choice;
        cout << endl;
        
    } while (choice == 'Y' || choice == 'y');
    
    cout << "Program ended." << endl;
    
    return 0;
}