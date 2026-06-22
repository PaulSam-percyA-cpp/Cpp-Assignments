#include <iostream>
using namespace std;

int main() {
    double power, time, energy;
    double totalEnergy = 0;
    
    cout << "Calculate Total Energy for 8 Appliances" << endl;
    cout << "========================================" << endl;
    
    for (int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << ":" << endl;
        cout << "Enter power rating (W): ";
        cin >> power;
        cout << "Enter usage time (hours): ";
        cin >> time;
        
        energy = power * time;
        totalEnergy = totalEnergy + energy;
        
        cout << "Energy for appliance " << i << ": " << energy << " Wh" << endl;
    }
    
    cout << "\n========================================" << endl;
    cout << "Total Energy Consumed = " << totalEnergy << " Wh" << endl;
    
    return 0;
}