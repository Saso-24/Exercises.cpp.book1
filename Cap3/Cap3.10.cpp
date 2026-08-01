/*
 10 - Write a program that takes an operation followed by two operands and outputs
      the result. For example:
      + 100 3.14
      * 4 5
      Read the operation into a string called operation and use an if-statement
      to figure out which operation the user wants,
      for example, if (operation=="+").
      Read the operands into variables of type double.
      Implement this for operations called +, –, *, /, plus, minus, mul, and div
      with their obvious meanings.
*/

#include <iostream>
using namespace std;

int main(){
	
	double val1 = 0, val2 = 0;
	string operation;
	
	cout << "- Calculator -\n" << "Enter your operation\n";
	cin >> val1 >> operation >> val2;
	
	if (operation == "+" || operation == "plus") cout << val1 + val2 << "\n";
	else if (operation == "-" || operation == "minus") cout << val1 - val2 << "\n";
	else if (operation == "*" || operation == "mul") cout << val1 * val2 << "\n";
	else if (operation == "/" || operation == "div") cout << val1 / val2 << "\n";
	else cout << "Invalid input\n";
	
	return 0;
	}
