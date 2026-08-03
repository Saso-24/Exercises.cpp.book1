#include <iostream>
using namespace std;

int main(){
	
	int i = 0;
	bool first = 1;
	double ch1[2048], up, down, value = 0;
	string unit;
	
	for (int i = 0; i<2048; i++) ch1[i] = 0;
	
	while (cin >> ch1[i]>> unit){
		
		if (first) {
			up = ch1[i];
			down = ch1[i];
			first = 0;
		}
		
		if (unit == "cm" || unit == " cm")
    	ch1[i] = ch1[i];

		else if (unit == "m" || unit == " m")
  		ch1[i] *= 100;

		else if (unit == "in" || unit == " in")
 	  	ch1[i] *= 2.54;

		else if (unit == "ft" || unit == " ft")
  	 	ch1[i] *= 12 * 2.54;

		else {
  	 	 cout << "Unidad no valida\n";
  	 	 continue;
		}
	
	//------------------------------------

		if (ch1[i] < ch1[i-1]) 
		cout << "The smallest value is " << ch1[i]
		<< ',' << "The greatest value is " << ch1[i-1] << '\n';
		
		else if (ch1[i] > ch1[i-1]) 
		cout << "The smallest value is " << ch1[i-1]
		<< ',' << "The greatest value is " << ch1[i] << '\n';

	//------------------------------------
		
		if (ch1[i] == ch1[i-1])
		cout << "The numbers are equal\n";
		
		else if ((ch1[i-1] - ch1[i]) < 1 && (ch1[i-1] - ch1[i]) > -1)
		cout << "The value is almost equal\n";
		
	//------------------------------------
		
		if (ch1[i] > up){
			cout << ch1[i] << " is the largest so far\n";
			up = ch1[i];
		} 
		
		else if (ch1[i] < down) {
			cout << ch1[i] << " is the smallest so far\n";
			down = ch1[i];
		}
		
		value = value + ch1[i];
		cout << "\n";
		i++;
	}
	
	
	cout << "\nThe program is shutting down\n"
	<< "Your largest number is " << up << '\n'
	<< "Your smallest number is " << down << '\n'
	<< "You entered " << i << " values\n"
	<< "Your sum is " << value / 100 << " meters\n";
	
	for (int i = 0; i < 2048; i++) {
		if (ch1[i] != 0) cout << "Value number " << i + 1 << ": " << ch1[i] << "\n";
		}
	return 0;
}
