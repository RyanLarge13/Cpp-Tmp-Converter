#include <iostream>
#include <limits>
using namespace std;

bool degreeOptions = true;

int main() {
	double temp;
	char restart;
	char answer;
	bool getTemp = true;
	bool getAnswer = false;
	do {
		cout << "Enter the temperature you would like to convert: " << endl << endl;
		cout << "Temp: ";
		cin >> temp;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("clear");
			cout << "Please input a valid number" << endl << endl;
			continue;
		}
		getAnswer = true;
		getTemp = false;
		cout << "Fahrenheit to Celsius: F" << endl;
		cout << "Celsius to Fahrenheit: C" << endl;
		cout << "Answer: ";
		cin >> answer;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("clear");
			cout << "Please input a valid number" << endl << endl;
			continue;
		}
		if (answer == 'F') {
			double denominator = (temp - 32) * 5;
			int numerator = 9;
			double result = denominator / numerator;
			cout << endl << temp << " degrees Fahrenheit is " << result << " degrees Celsius" << endl;
			getTemp = true;
			getAnswer = false;
		}
		else if (answer == 'C') {
			double denominator = (temp * 9);
			int numerator = 5;
			double result = (denominator / numerator) + 32;
			cout << endl << temp << " degrees Celsius is " << result << " degrees Fahrenheit" << endl;
			getTemp = true;
			getAnswer = false;
		}
		else {
			system("clear");
			cout << "Please input: F or C for a valid conversion" << endl << endl;
			continue;
		}
		cout << endl << "Would you like to add another conversion? Yes/No (Y/N)";
		cin >> restart;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("clear");
			cout << "Please input a valid character (Y or N)" << endl << endl;
			restart = 'N';
		}
		system("clear");
	} while (restart == 'Y' || restart == 'y');
	return 0;
}