/*
 6 - Write a program that prompts the user to enter three integer values,
     and then outputs the values in numerical sequence separated by commas.
     So, if the user enters the values 10 4 6,
     the output should be 4, 6, 10.
     If two values are the same,
     they should just be ordered together. 
     So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>
using namespace std;

int main () {
	
	int val1 = 0, val2 = 0, val3 = 0;
	
	cout << "Enter 3 values:\n";
	
	while (true){
	cin >> val1 >> val2 >> val3;
		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid value input, please try again.\n"
			<< "Enter 3 values: ";
		} else break;
	
	}
	
	if (val1 < val2 && val1 < val3){
		if (val2 < val3)
		cout << "Your sequence is " 
		 << val1 << ", "
		<< val2 << ", "
		<< val3 << "\n"; 
		else 
		cout << "Your sequence is " 
		<< val1 << ", "
		<< val3 << ", "
		<< val2 << "\n";
		}
		
	else if (val2 < val1 && val2 < val3){
		if (val1 < val3)
		cout << "Your sequence is " 
		<< val2 << ", "
		<< val1 << ", "
		<< val3 << "\n";
		else 
		cout << "Your sequence is " 
		<< val2 << ", "
		<< val3 << ", "
		<< val1 << "\n";
		}
		
	else if (val3 < val2 && val3 < val1){
		if (val2 < val1)
		cout << "Your sequence is " 
		<< val3 << ", "
		<< val2 << ", "
		<< val1 << "\n";
		else 
		cout << "Your sequence is " 
		<< val3 << ", "
		<< val1 << ", "
		<< val2 << "\n";
		}
	else if (val1 == val2){
		if (val2 < val3)
		cout << "Your sequence is " 
		<< val1 << ", "
		<< val2 << ", "
		<< val3 << "\n";
		else 
		cout << "Your sequence is " 
		<< val3 << ", "
		<< val1 << ", "
		<< val2 << "\n";
		}
	else if (val1 == val3){
		if (val3 < val2)
		cout << "Your sequence is " 
		<< val3 << ", "
		<< val1 << ", "
		<< val2 << "\n"; 
		else 
		cout << "Your sequence is " 
		<< val2 << ", "
		<< val1 << ", "
		<< val3 << "\n";
		}
	else if (val2 == val3){
		if (val1 < val2)
		cout << "Your sequence is " 
		<< val1 << ", "
		<< val2 << ", "
		<< val3 << "\n"; 
		else 
		cout << "Your sequence is " 
		<< val2 << ", "
		<< val3 << ", "
		<< val1 << "\n";
		}
	else 
		cout << "Your sequence is " 
		<< val1 << ", "
		<< val2 << ", "
		<< val3 << "\n"; 
	
	return 0;
}
