#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double radius, area;
	const double PI = 3.14159;
	
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	
	//Area
	area = PI * pow(radius, 2);
	
	cout<<"Area of circle = "<<area<<endl;
	
	return 0;
}