#include <iostream>
using namespace std;

int main() {
    double power;
    double totalLoad = 0;
    
    cout << "===== LOAD TEST =====" << endl;
    cout << "Maximum load limit: 5000 W" << endl;
    cout << "=====================" << endl;
    cout << endl;
    
    for (int i = 1; i <= 20; i++) {
        cout << "Enter power rating for appliance " << i << " (W): ";
        cin >> power;
        
        totalLoad = totalLoad + power;
        
        if (totalLoad > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        } else {
            cout << "Load added. Current total: " << totalLoad << " W" << endl;
        }
        cout << endl;
    }
    
    cout << "\nFinal Total Load = " << totalLoad << " W" << endl;
    
    return 0;
}