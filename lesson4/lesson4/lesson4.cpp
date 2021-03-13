#include <iostream>
using namespace std;

int main()
{
	int number;
	
	bool done = false;
	while (!done) {
		cout << "Enter an integer please: \n";
		cin >> number;
		if (number % 2 == 0) {
			cout << "your number is even.\n";
		}
		else {
			cout << "your number is odd\n";
		}
		string word;
		cout << "would you like to exit? ";
		cin >> word;
		if (word == "yes") {
			done = true;
		}
		
	}
	system("pause>0");
}

