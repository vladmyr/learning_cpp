#include <iostream>
#include <string>
using namespace std;

double furlongsToKilometers(double);
string threeBlindMice();
string seeHowTheyRun();
int yearsToMonths(int);
double celsiusToFarenheits(double);
double farenheitsToCelsius(double);

int main() {
	// 1. Display name and address
	cout << "TAKS 1" << endl;
	cout << "My name is Volodymyr Khytskyi" << endl;
	cout << "Currently I live in Poland" << endl;
	
	// 2. Ask distance in furlongs and convert to kilometers
	double furlongs(0);

	cout << endl <<"TAKS 2" << endl;
	cout << "Enter amount of furlongs you want to convert to kilometers: ";
	cin >> furlongs;
	cin.get();
	cout << furlongs << " furlongs equal to " << furlongsToKilometers(furlongs) << " kilometers" << endl;

	//3. User defined functions
	cout << endl << "TAKS 3" << endl;
	cout << threeBlindMice() << endl << threeBlindMice() << endl;
	cout << seeHowTheyRun() << endl << seeHowTheyRun() << endl;

	//4. age in months
	int years(0);

	cout << endl << "TASK 4" << endl;
	cout << "Enter your age to get amount of monthes you lived: ";
	cin >> years;
	cin.get();
	cout << "You lived " << yearsToMonths(years) << " months" << endl;

	//5. Farenheigts to Celsius and visa-versa
	double celsius(0);
	double farenheits(0);

	cout << endl << "TASK 5" << endl;
	cout << "Enter celsius temperature value to convert to farenheit: ";
	cin >> celsius;
	cin.get();
	cout << celsius << " celsius equal to " << celsiusToFarenheits(celsius) << " farenheit degree" << endl;
	cout << "Enter farenheit temperature value to convert to celsius: ";
	cin >> farenheits;
	cin.get();
	cout << farenheits << " farenheit equal to " << farenheitsToCelsius(farenheits) << " celsius degree" << endl;

	// and so on...
	// see output before exiting
	cout << endl << "Execution completed. Hit any button to exit..." << endl;
	cin.get();
}

double furlongsToKilometers(double furlongs) {
	return furlongs * 0.201168;
}

string threeBlindMice() {
	return "Tree blind mice";
}

string seeHowTheyRun() {
	return "See how they run";
}

int yearsToMonths(int years) {
	return years * 12;
}

double celsiusToFarenheits(double celsius) {
	return celsius * 1.8 + 32.0;
}

double farenheitsToCelsius(double farenheits) {
	return (farenheits - 32.0) / 1.8;
}