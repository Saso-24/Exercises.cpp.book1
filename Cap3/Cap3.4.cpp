/*
 4 - Write a program that prompts the user to enter two integer values. 
     Store these values in int variables named val1 and val2. 
     Write your program to determine the smaller, larger, sum, difference, 
     product, and ratio of these values and report them to the user.
 */

#include <iostream>
using namespace std;

int main (){
	int val1, val2 = 0;
	
	cout << "Enter value 1 and value 2\n";
	
	while(true){
		cin >> val1 >> val2;
	
	    if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input detected, please try again.\n"
			<< "Enter value 1 and value 2\n";
			}
		else if (val1 == val2) {
			cout << val1 << " and " << val2
			<< " are equal." << "\n";
			break;
		}
		
		else if (val1 < val2) {
			cout << val1 
			<< " is smaller than " << val2 << "\n";
			break;
		}
	
		else if (val1 > val2) {
			cout << val1 
			<< " is larger than " << val2 << "\n";
			break;
		}
		
	}
	
	cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
	cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
	cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
	cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
	
	return 0;
}
