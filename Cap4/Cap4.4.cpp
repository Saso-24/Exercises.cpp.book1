/*
 4. Write a program to play a numbers guessing game.
 The user thinks of a number between 1 and 100 and your program
 asks questions to figure out what the number is
 (e.g., “Is the number you are thinking of less than 50?”).
 Your program should be able to identify the number after asking
 no more than seven questions. Hint: Use the < and <= operators and the
 if-else construct.
*/

#include <iostream>
using namespace std;

int main (){
	
	int low = 1, high = 100, point = 50;
	char in = 0;
	
	cout << "---Numbers guessing game---\n"
	<< "\nPick a number between 1 to 100\n\n";
	
	while (low != high){
	
	cout << "Is the number you are thinking less or equal than " << point << "? (y/n): ";
		
	cin >> in;
	
	if (in == 'y') {
		high = point;
		point = (high + low) / 2;
		} 
	
	else if (in == 'n') {
		
		low = point + 1;
		
		point = (high + low) / 2;
		
		while (low != high){	
		
		if (point == low || point == high) break;

		cout << "Is the number you are thinking more or equal than " << point << "? (y/n): ";
			
		cin >> in;
		
		if (in == 'y'){
			
			low = point;
		
			point = (high + low) / 2;
		}
		else if (in == 'n'){
			
			high = point - 1;
			point = (high + low) / 2;
			break;
		}
		else cout << "That's not a valid input\n";
		}
	}
	else cout << "That's not a valid input\n";
	
}
	
	cout << "Your number is: " << point;
	
	return 0;
}
