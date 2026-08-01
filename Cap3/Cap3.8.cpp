/*
 8 - Write a program to test an integer value to determine if it is odd or even. 
      As always, make sure your output is clear and complete. 
      In other words, don’t just output yes or no.
      Your output should stand alone, like The value 4 is an even number.
      Hint: See the remainder (modulo) operator in §3.4. 
 */

#include <iostream>
using namespace std;

int main(){
	int val = 0;
	
	cout << "- Odd-even number detecter -\n" << "Enter a number\n";
	cin >> val;
	
	if (val % 2)
	cout << "The value " << val << " is an even number\n";
	
	else
	cout << "The value " << val << " is an odd number\n";
	
	return 0;
}
