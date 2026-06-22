#include <iostream>
using namespace std;

int main() {
    double temperature;
    
    cout << "Motor Temperature Monitoring System" << endl;
    cout << "====================================" << endl;
    cout << "Enter motor temperature readings (Stop when > 90°C)" << endl;
    cout << endl;
    
    // Initialize temperature to 0 to enter the loop
    temperature = 0;
    
    while (temperature <= 90) {
        cout << "Enter motor temperature (°C): ";
        cin >> temperature;
        
        if (temperature > 90) {
            cout << "Motor temperature unsafe. Stop motor test." << endl;
        } else {
            cout << "Temperature is safe. Continue testing." << endl;
        }
        cout << endl;
    }
    
    cout << "Motor test stopped." << endl;
    
    return 0;
}