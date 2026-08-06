/*
 6 - Make a vector holding the ten string values "zero", "one", . . . "nine".
     Use that in a program that converts a digit to its corresponding
     spelled-out value; e.g., the input 7 gives the output seven.
     Have the same program, using the same input loop,
     convert spelled-out numbers into their digit form;
     e.g., the input seven gives the output 7.
*/

#include <iostream>
#include <vector>
using namespace std;

int main (){
	int i;
	vector<string> num{"zero", "one", "two", "three", "four",
		               "five", "six", "seven", "eight", "nine",};
	
	cout << "Enter a number: ";
	
	while (cin >> i){
		cout << num[i] << "\n";
		cout << "Enter a number: ";
	}
	
	return 0;
}
