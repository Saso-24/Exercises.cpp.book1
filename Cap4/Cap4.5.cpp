/*
 5 - Write a program that performs as a very simple calculator.
     Your calculator should be able to handle the four basic math
     operations — add, subtract, multiply, and divide — on two input values.
     Your program should prompt the user to enter
     three arguments: two double values and a character to represent an operation.
     If the entry arguments are 35.6, 24.1, and '+',
     the program output should be The sum of 35.6 and 24.1 is 59.7.
     In Chapter 6 we look at a much more sophisticated simple calculator.
 */

#include <iostream>
using namespace std;

int main(){
	
	double a, b;
	char in;
	
	cout << "---Calculator---\n"
	<< "Enter 2 values and the operator symbol:\n";
	
	while (cin >> a >> b) {
	cin >> in;
	
	if (in == '+') cout << a << " + " << b << " = " << a + b << "\n";
	else if (in == '-') cout << a << " - " << b << " = " << a - b << "\n";
	else if (in == '*') cout << a << " * " << b << " = " << a * b << "\n";
	else if (in == '/') cout << a << " / " << b << " = " << a / b << "\n";
	else cout << "Not valid input detected\n";
	
	cout << "Enter 2 values and the operator symbol:\n";
	}

	return 0;
}
