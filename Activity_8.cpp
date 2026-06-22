#include <iostream>
using namespace std;

int main() {
    double current1, current2, current3, average;
    
    for (int i = 1; i <= 6; i++) {
        cout << "\n--- Set " << i << " ---" << endl;
        cout << "Enter Line 1 current: ";
        cin >> current1;
        cout << "Enter Line 2 current: ";
        cin >> current2;
        cout << "Enter Line 3 current: ";
        cin >> current3;
        
        average = (current1 + current2 + current3) / 3;
        
        cout << "Average current for set " << i << ": " << average << " A" << endl;
    }
    
    return 0;
}