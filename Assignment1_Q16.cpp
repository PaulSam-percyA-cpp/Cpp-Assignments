#include<iostream>
using namespace std;

int main(){
    int x = 10;
    bool flag = true;
    
    cout << "Bitwise NOT of " << x << " = " << (~x) << endl;
    
    cout << "Logical NOT of true = " << (!flag) << endl;
    
    return 0;
}