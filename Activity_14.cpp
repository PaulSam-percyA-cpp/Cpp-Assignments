#include <iostream>
#include <string>
using namespace std;

int main() {
    string accessCode;
    int attempts = 0;
    const string correctCode = "BEE208";
    
    cout << "===== LABORATORY ACCESS SYSTEM =====" << endl;
    cout << "Correct code required to enter" << endl;
    cout << "====================================" << endl;
    cout << endl;
    
    while (attempts < 3) {
        cout << "Enter access code (Attempt " << (attempts + 1) << "/3): ";
        cin >> accessCode;
        
        if (accessCode == correctCode) {
            cout << "Access granted." << endl;
            break;
        } else {
            cout << "Incorrect code. Try again." << endl;
            attempts++;
        }
        cout << endl;
    }
    
    if (attempts == 3) {
        cout << "Access denied. Maximum attempts reached." << endl;
    }
    
    return 0;
}