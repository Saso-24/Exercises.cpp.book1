/*
 7 - Do exercise 6, but with three string values. 
     So, if the user enters the values Steinbeck, Hemingway, Fitzgerald,
     the output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	
	string val1, val2, val3;
	
	cout << "Enter 3 names:\n";
	cin >> val1 >> val2 >> val3;
	
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
