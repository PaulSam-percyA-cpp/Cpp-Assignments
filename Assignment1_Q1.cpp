#include<iostream>
using namespace std;

int main(){

    //declaration
    int num1, num2;
    int sum, difference, product;
    float quotient;

    cout<<"Enter first integer: ";
    cin>>num1;

    cout<<"Enter second integer: ";
    cin>>num2;

    //process
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    //display
    cout<<"\nResults:\n";
    cout<<"Sum = " <<sum <<endl;
    cout<<"Difference = " <<difference <<endl;
    cout<<"Product = " <<product <<endl;
    cout<<"Quotient = " <<quotient <<endl;

    return 0;
}