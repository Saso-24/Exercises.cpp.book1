//This is not a book excersise, It something i tough out of curiosity

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	cout << "---Verificador de Sucesión de Fibonacci---\n";
    long long num;
    vector<long long> fibonacci (93);
    fibonacci[0] = 0, fibonacci[1] = 1;
    bool flag = false;
    
    for (int i = 2; i < fibonacci.size(); i++){
		fibonacci[i] = fibonacci[i-1] + fibonacci[i-2]; 
		cout << fibonacci[i] << "\n";
		}
    
    cout << "Ingresa un numero: ";
    
    while (cin >> num){

    for (int i = 0; i < fibonacci.size(); i++) {
	if (num == fibonacci[i]) {
	cout << num << " es un numero de Fibonacci\n";	
	flag = true;
	break;
	}
	}

	if (!flag) cout << num << " no es un numero de Fibonacci\n";
    flag = false;
  
    cout << "Ingresa un numero: ";
    }
    
    return 0;
}
