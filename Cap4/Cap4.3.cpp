/*
 3 - Read a sequence of double values into a vector. 
     Think of each value as the distance between two cities along a given route. 
     Compute and print the total distance (the sum of all distances).
     Find and print the smallest and greatest distance
     between two neighboring cities.
     Find and print the mean distance between two neighboring cities.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	bool first = true;
	vector<double> value;
	double x, sum = 0, up, down;
	
	cout << "Enter the distance in kilometers:\n";
	while (cin >> x) {
		value.push_back(x);
		sum = sum + x;
		
		if (first){
			up = x;
			down = x;
			first = false;
		}
		
		if (x > up) up = x;
		else if (x < down) down = x;

	}
		
	cout << "Your sumatory is: " << sum << "km\n"
	<< "The mean distance is: " << sum/value.size() << "km\n"
	<< "Your longest distance is: "<< up << "km\n"
	<< "Your shortest distance is: " << down << "km\n";
	return 0;
}
