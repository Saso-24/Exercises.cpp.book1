#include <iostream>
using namespace std;

int main (){
	
	int s = 1; 
	long long rice = 1;
	
	for(int i = 0; i < 64; i++){
		if (rice >= 1000) {
		cout << "square " << s << "\t" << rice << " grains of rice\n";
		break;
	}
		else
		cout << "square " << s << "\t" << rice << " grains of rice\n";
		rice *= 2;
		s++;
	}
		
		
	return 0;
}
