#include <iostream>
using namespace std;

int main() {
    int result;
    int passed = 0, failed = 0;
    
    cout << "Component Test Results (1 = Pass, 0 = Fail)" << endl;
    
    for (int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i << ": ";
        cin >> result;
        
        if (result == 1) {
            passed++;
        } else if (result == 0) {
            failed++;
        } else {
            cout << "Invalid input! Please enter 1 or 0." << endl;
            i--; // Repeat this iteration
        }
    }
    
    cout << "\n===== TEST SUMMARY =====" << endl;
    cout << "Passed components: " << passed << endl;
    cout << "Failed components: " << failed << endl;
    
    return 0;
}