#include <iostream>
using namespace std;

int main() {
    double resistance;
    
    cout << "Earth Resistance Test" << endl;
    cout << "=====================" << endl;
    cout << "Testing earthing system (Stop when > 5 O)" << endl;
    cout << endl;
    
    resistance = 0; // Initialize to enter the loop
    
    while (resistance <= 5) {
        cout << "Enter earth resistance (O): ";
        cin >> resistance;
        
        if (resistance > 5) {
            cout << "Earth resistance too high. Improve earthing system." << endl;
        } else {
            cout << "Earth resistance is acceptable." << endl;
        }
        cout << endl;
    }
    
    cout << "Earth resistance test completed." << endl;
    
    return 0;
}