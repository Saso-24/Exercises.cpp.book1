#include <iostream>
#include <cmath>
using namespace std;

int square(int a);

// calculate and print a table of squares 0–99
int main()
{
for (int i = 0; i<100; ++i)
cout << i << '\t' << square(i) << '\n';
}

int square(int a){
	int b;
	b = a*a;
	return b;
	}
