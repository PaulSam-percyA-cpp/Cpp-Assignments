#include <iostream>
using namespace std;

int main() {
    double reading;
    
    cout << "===== INSULATION RESISTANCE TEST =====" << endl;
    cout << "Testing up to 10 readings (Stop if < 1 MO)" << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance reading " << i << " (MO): ";
        cin >> reading;
        
        if (reading < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
        cout << endl;
    }
    
    return 0;
}