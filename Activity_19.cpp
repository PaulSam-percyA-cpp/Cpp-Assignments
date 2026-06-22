#include <iostream>
using namespace std;

int main() {
    double reading;
    double sum = 0;
    int count = 0;
    
    cout << "===== SENSOR READING MONITOR =====" << endl;
    cout << "Enter 12 sensor readings (999 = faulty)" << endl;
    cout << "======================================" << endl;
    cout << endl;
    
    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;
        
        if (reading == 999) {
            cout << "Faulty sensor value skipped." << endl;
            continue;
        } else {
            sum = sum + reading;
            count++;
            cout << "Valid reading recorded." << endl;
        }
        cout << endl;
    }
    
    cout << "\n===== SUMMARY =====" << endl;
    if (count > 0) {
        double average = sum / count;
        cout << "Average of valid readings = " << average << endl;
        cout << "Number of valid readings = " << count << endl;
        cout << "Number of faulty readings = " << (12 - count) << endl;
    } else {
        cout << "No valid readings found." << endl;
    }
    
    return 0;
}