#include <iostream>
#include <vector>
using namespace std;

int scan_num();
		               
int main(){
	
	cout << "---Calculator---\n"
	<< "Enter 2 values and the operator symbol:\n";
	
	while (scan_num()) {
		cout << "Enter 2 values and the operator symbol:\n";
	}
	return 0;
}

int scan_num(){
	
	char in;
	string x, y;
	int a = 10, b = 10;
	vector<string> num{"zero", "one", "two", "three", "four",
		               "five", "six", "seven", "eight", "nine"};
	vector<string> digit{"0", "1", "2", "3", "4",
		                 "5", "6", "7", "8", "9"};
		               
	cin >> x >> y >> in;
	
	
	for (int i = 0; i < num.size(); i++){
		if (x == num[i]) a = i;
		else if (x == digit[i]) a = i;
		if (y == num[i]) b = i;
		else if (y == digit[i]) b = i;
	}
	
	if (a > 9 || b > 9) return 0;
	
	if (in == '+') cout << a << " + " << b << " = " << a + b << "\n";
	else if (in == '-') cout << a << " - " << b << " = " << a - b << "\n";
	else if (in == '*') cout << a << " * " << b << " = " << a * b << "\n";
	else if (in == '/') cout << a << " / " << b << " = " << a / b << "\n";
	
	return 1;
	
	
	
}
