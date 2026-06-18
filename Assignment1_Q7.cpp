#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	bool containsA = false;
	
	cout<<"Enter a string: ";
	cin>>input;
	
	for (int i = 0; i < input.length(); i++){
		if(input[i] == 'a' || input[i] == 'A'){
			containsA = true;
			break;
		}
	}
	
	if (containsA){
		cout<<"Contains 'a'"<<endl;		
	}
		
	return 0;
}