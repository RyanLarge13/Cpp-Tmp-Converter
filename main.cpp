#include <iostream>
using namespace std;

bool degreeOptions = true;

int main() {
	double temp;
	char answer;
	bool getTemp = true;
	bool getAnswer = true;
	while (getTemp) {
		cout << "Enter the temperature you would like to convert: " << endl << endl;
		cout << "Temp: ";
		cin temp;
		if (cin.fail()) {
			cin.clear()
			cin.ignore(numeric_limits);
			system("clear");
			cout << "Please input a valid number" << endl << endl;
		}
	}
	while (getAnswer) {
		cout << "Fahrenheit to Celsius: F" << endl;
		cout << "Calsius to Fahrenheit: C" << endl;
		cout << "Answer: "
		cin >> answer;
		if (cin.fail()) {
			cin.clear()
			cin.ignore(numeric_limits);
			system("clear");
			cout << "Please input a valid number" << endl << endl;
		}
		if (answer == "N") {
			
		}
	}
	return 0;
}