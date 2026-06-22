#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "===== FUSE RATING MENU =====" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "============================" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "5A Fuse: Suitable for lighting circuits" << endl;
            break;
        case 2:
            cout << "10A Fuse: Suitable for small appliances" << endl;
            break;
        case 3:
            cout << "13A Fuse: Suitable for general appliances" << endl;
            break;
        case 4:
            cout << "20A Fuse: Suitable for high power appliances" << endl;
            break;
        case 5:
            cout << "32A Fuse: Suitable for industrial equipment" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}