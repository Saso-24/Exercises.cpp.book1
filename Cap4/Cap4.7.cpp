#include <iostream>
#include <vector>
using namespace std;

int scan_num(string x);

int print_result(double a, double b, char x);
		               
int main(){
	
	char in;
	double x,y;
	string a, b;
	
	cout << "---Calculator---\n"
	<< "Enter 2 values and the operator symbol:\n";
	
	while (true) {
		
		cin >> a; 	if (a == "e") break;
		cin >> b; 	if (b == "e") break;
		cin >> in; 	if (in == 'e') break;
		
		x = scan_num(a);
		y = scan_num(b);
		
		print_result(x, y, in);
	
		cout << "Enter 2 values and the operator symbol ('e' to exit):\n";
	}
	return 0;
}

int scan_num(string x)
{
    vector<string> num{
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };

    vector<string> digit{
        "0","1","2","3","4",
        "5","6","7","8","9"
    };

    for (int i = 0; i < num.size(); ++i){
        if (x == num[i] || x == digit[i])
            return i;
    }
    
    cout << "Not valid input detected\n";

    return -1;
}

int print_result(double a, double b, char x){
	if (x == '+') cout << a << " + " << b << " = " << a + b << "\n";
	else if (x == '-') cout << a << " - " << b << " = " << a - b << "\n";
	else if (x == '*') cout << a << " * " << b << " = " << a * b << "\n";
	else if (x == '/') cout << a << " / " << b << " = " << a / b << "\n";
	else return 0;
	
	return 1;
}
