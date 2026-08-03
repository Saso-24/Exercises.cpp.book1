#include <iostream>
using namespace std;

int main()
 // you can switch only on integers, etc.
{
cout << "Do you like fish?\n";
char s;
cin >> s;
switch (s) {
 // error: the value must be of integer, char, or enum type
case 'n':
// . . .
break;
case 'y':
// . . .
break;
}
}
