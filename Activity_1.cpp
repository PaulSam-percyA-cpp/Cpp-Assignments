#include <iostream>
using namespace std;

int main() {
    double powerFactor;
    
    // Get input from user
    cout << "Enter the power factor of the electrical load: ";
    cin >> powerFactor;
    
    // Classify the power factor
    if (powerFactor < 0 || powerFactor > 1) {
        cout << "Invalid power factor" << endl;
    } 
    else if (powerFactor >= 0.00 && powerFactor <= 0.50) {
        cout << "Poor power factor" << endl;
    } 
    else if (powerFactor >= 0.51 && powerFactor <= 0.80) {
        cout << "Fair power factor" << endl;
    } 
    else if (powerFactor >= 0.81 && powerFactor <= 0.95) {
        cout << "Good power factor" << endl;
    } 
    else if (powerFactor >= 0.96 && powerFactor <= 1.00) {
        cout << "Excellent power factor" << endl;
    }
    
    return 0;
}