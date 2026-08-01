#include <iostream>
using namespace std;

int main () 
{
	cout << "Please enter your first name and age\n";
	string first_name; // string variable
	int age; // integer variable
	cin >> first_name >> age;; // read a string  // read an integer
	cout << "Hello, " << first_name << " (age " << age << ")\n";
	
	return 0;
	
	}
