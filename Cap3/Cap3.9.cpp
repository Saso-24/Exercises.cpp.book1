/*
 9 - Write a program that converts spelled-out numbers such as “zero” and “two”
     into digits, such as 0 and 2. When the user inputs a number, 
     the program should print out the corresponding digit. 
     Do it for the values 0, 1, 2, 3, and 4 and write out 
     not a number I know if the user enters something that doesn’t correspond,
     such as stupid computer!.
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string num;
	
	cout << "Enter a number using only letters: ";
	cin >> num;
	
	for (char& c : num) {
        c = tolower(c);
    }
	
	if (num == "zero") cout << num << " is 0\n";
	else if (num == "one") cout << num << " is 1\n";
	else if (num == "two") cout << num << " is 2\n";
	else if (num == "three") cout << num << " is 3\n";
	else if (num == "four") cout << num << " is 4\n";
	else cout << "Not a number I know\n" << "Stupid computer!\n";
		
	return 0;
	}
