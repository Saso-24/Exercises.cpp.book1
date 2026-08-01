/*
 11 - Write a program that prompts the user to enter some number of
      pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins),
      quarters (25-cent coins), half dollars (50-cent coins), and
      one-dollar coins (100-cent coins). Query the user separately for
      the number of each size coin, e.g., “How many pennies do you have?”
      Then your program should print out something like this:
      You have 23 pennies.
      You have 17 nickels.
      You have 14 dimes.
      You have 7 quarters.
      You have 3 half dollars.
      The value of all of your coins is 573 cents.
      Make some improvements: if only one of a coin is reported,
      make the output grammatically correct, e.g., 14 dimes and
      1 dime (not 1 dimes). Also, report the sum in dollars and cents,
      i.e., $5.73 instead of 573 cents.
*/

#include <iostream>
using namespace std;

int main(){
	int pennies, nickles, dimes, quarters, halfd, oned;
	double dollar = 0;
	
	cout << "How many pennies do you have? ";
	cin >> pennies;
	
	cout << "How many nickels do you have? ";
	cin >> nickles;
	
	cout << "How many dimes do you have? ";
	cin >> dimes;
	
	cout << "How many quarters do you have? ";
	cin >> quarters;
	
	cout << "How many half dollar do you have? ";
	cin >> halfd;
	
	cout << "How many one dollar do you have? ";
	cin >> oned;
	
	cout << "------------------------------------\n";
	
	cout << "You have " << pennies << " penn";
	if (pennies == 1) cout << "y\n";
	else cout << "ies\n";
	
	cout << "You have " << nickles << " nickel";
	if (nickles == 1) cout << "\n";
	else cout << "s\n";
	
	cout << "You have " << dimes << " dime";
	if (dimes == 1) cout << "\n";
	else cout << "s\n";
	
	cout << "You have " << quarters << " quarter";
	if (quarters == 1) cout << "\n";
	else cout << "s\n";
	
	cout << "You have " << halfd << " half dollar";
	if (halfd == 1) cout << "\n";
	else cout << "s\n";
	
	cout << "You have " << oned << " one dollar";
	if (oned == 1) cout << "\n";
	else cout << "s\n";
	
	cout << "------------------------------------\n";
	
	dollar = (pennies * 0.01) + (nickles * 0.05) + (dimes * 0.1)
	+ (quarters *0.25) + (halfd * 0.5) + oned;
	
	cout << "You have an amount of $" << dollar << " dollars";
	return 0;
}
