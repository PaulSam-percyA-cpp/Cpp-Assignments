#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	
	cout<<"Enter three integers: ";
	cin>>num1>>num2>>num3;
	
	if (num1 == num2 && num2 == num3){
		cout<<"Equal"<<endl;
	}else{
		cout<<"Not equal"<<endl;		
	}
	return 0;	
}