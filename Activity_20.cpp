#include <iostream>
using namespace std;

int main() {
    double reading;
    double total = 0;
    int count = 0;
    
    cout << "===== POWER READING MONITOR =====" << endl;
    cout << "Enter 10 power readings (Negative = invalid)" << endl;
    cout << "============================================" << endl;
    cout << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << " (W): ";
        cin >> reading;
        
        if (reading < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        } else {
            total = total + reading;
            count++;
            cout << "Valid reading recorded." << endl;
        }
        cout << endl;
    }
    
    cout << "\n===== SUMMARY =====" << endl;
    cout << "Total of valid power readings = " << total << " W" << endl;
    cout << "Number of valid readings = " << count << endl;
    cout << "Number of invalid readings = " << (10 - count) << endl;
    
    return 0;
}