#include <iostream>
using namespace std;

int main() {
    double wattage, totalPower = 0;
    
    cout << "Enter wattage of 12 lighting points:" << endl;
    
    for (int i = 1; i <= 12; i++) {
        cout << "Enter wattage for lighting point " << i << ": ";
        cin >> wattage;
        totalPower = totalPower + wattage;
    }
    
    cout << "Total Lighting Load = " << totalPower << " W" << endl;
    
    return 0;
}