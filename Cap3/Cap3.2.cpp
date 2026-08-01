/*
 2 - Write a program in C++ that converts from miles to kilometers. 
     Your program should have a reasonable prompt for the
     user to enter a number of miles.
     Hint: There are 1.609 kilometers to the mile.
*/


#include <iostream>
using namespace std;

int main(){
	
	double millas, km = 0;
	
	cout << "Convertidor de Millas a Kilometros\n\n"
	<< "  Ingresa millas: ";
	cin >> millas;
	
	km = millas * 1.609;
	
	cout << "  " << millas << " millas son "
	<< km << " kilometros\n";
	return 0;
	}
