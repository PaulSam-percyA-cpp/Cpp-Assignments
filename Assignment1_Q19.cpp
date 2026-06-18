#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string binary;
    int decimal = 0;
    
    cout << "Enter a binary number: ";
    cin >> binary;
    
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1') {
            decimal += pow(2, binary.length() - 1 - i);
        }
    }
    
    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;
    
    return 0;
}