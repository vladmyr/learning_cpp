#include <iostream>
#include <cmath>

using namespace std;

//function prototypes
double furlongsToYards(double);
double celsiusToFahrenheit(double);
double lightYearsToAstronomicUnits(double);
double astronomicUnitsToKilomiters(double);
void sayThreeBlindMice(void);
void sayHowTheyRun(void);

int main() {
	//1. Write a C++ program that displays your name and address
	cout << "My name is Volodymyr Khytksy" << endl;
	cout << "My home address is: ul.Paca 39a, 23" << endl;
	cout << endl;

	//2. Write a C++ program that asks for a distance in furlongs and converts it ti yards
	double furlongs;
	cout << "Write the distance in furlongs: ";
	cin >> furlongs;
	cin.get();
	cout << furlongs << " furlongs = " << furlongsToYards(furlongs) << " yards"<<endl;
	cout << endl;

	//3. Write a C++ program that uses treee user0defined functions (including main()) and produces the following output:
	//	Three blind mice
	//	Three blind mice
	//	See how they run
	//	See how they run
	sayThreeBlindMice();
	sayThreeBlindMice();
	sayHowTheyRun();
	sayHowTheyRun();
	cout << endl;

	//5. Celsius to Farenheigt
	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cin.get();
	cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit" << endl;

	//6. Light years to astronomical units
	double lightYears;
	double aUnits;
	cout << "Enter the number of light years: ";
	cin >> lightYears;
	cin.get();
	aUnits = lightYearsToAstronomicUnits(lightYears);
	cout << lightYears << " light years = " << aUnits << " astronomic units = " << astronomicUnitsToKilomiters(aUnits) << " km" << endl;

	cin.get();
	return 0;
}

double furlongsToYards(double furlongs) { // function header
	return 220 * furlongs;
}

double celsiusToFahrenheit(double celsius) {
	return 1.8 * celsius + 32;
}

double lightYearsToAstronomicUnits(double lightYears) {
	return 63240 * lightYears;
}

double astronomicUnitsToKilomiters(double aUnits) {
	return aUnits * 150000000;
};

void sayThreeBlindMice(void) {
	cout << "Threee blind mice" << endl;
};

void sayHowTheyRun(void) {
	cout << "See how they run" << endl;
};