#include<iostream>
using namespace std;

int main(){
	double a, b, max;
	
	cout<<"Enter two floating point numbers: ";
	cin>>a>>b;
	
	max = (a > b) ? a : b;
	
	cout<<"Larger number is: "<<max<<endl;
		
	return 0;
}