#include <iostream>
#include <string>
using namespace std;

void simple_error() {cout << "You're kidding\n";}

int main(){
	
	int age;
    string name, friend_name;
    char friend_sex = 0;
    
    cout << "Enter name of receiver\n";
    cin >> name;
    cout << "Enter receiver's age\n";
    
    while (cin >> age){
        if (age <= 0 || age >= 110) {simple_error();
			cout << "Enter receiver's age\n";
		}
        else break;
    }
    
    cout << "Enter receiver's friend\n";
    cin >> friend_name;
    cout << "Enter friend's sex (m/f)\n";
    
    while (cin >> friend_sex){
		if (friend_sex == 'f' || friend_sex == 'm') break;
		else {
			simple_error();
			cout << "Enter friend's sex (m/f)\n";
			}
		}
		
    cout << "Dear, " << name 
    << ". How are you?\n I am fine.\n I miss you.\n "
    << "\nhave you seen " << friend_name <<"?\n";
    
    if (friend_sex == 'm')
    cout << "If you see " << friend_name
    << " please ask him to call me.\n";
    else cout << "If you see " << friend_name
    << " please ask her to call me.\n";
    
    cout << "I hear you just had a birthday and you are " << age
    << " years old.\n";
    
    if (age < 12) cout << "Next year you will be " << age + 1 << ".\n\n";
    else if (age == 17) cout << "Next year you will be able to vote.\n\n";
    else if (age > 70) cout << "I hope you are enjoying retirement.\n\n";
    
    cout << "Yours sincerely,\n\nyour friend, Saso.\n"; 
    
    return 0;
}
