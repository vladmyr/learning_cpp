#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	// chapter review
	short a(80);
	unsigned int b(42110);
	unsigned int c = 3000000000;		// 3 000 000 000
	auto d = 33;	// int
	auto e = 33L;	// long

	char nGrade = 65;
	char cGrade = 'A';

	cout << nGrade << " == " << cGrade << " ? " << (nGrade == cGrade) << endl;

	// 6.
	char cChar = 88;
	char cCharSame = static_cast<char>(88);

	cout << cChar << " "<< cCharSame << " " << (cChar == cCharSame) << endl;

	// 7.
	long lng(LONG_MAX);
	long long llng(LLONG_MAX);
	double dbl = static_cast<double>(lng);		// lost presigion after 6-th digit
	double dbl2 = static_cast<double>(llng);	// same

	cout << lng << endl
		<< llng << endl
		<< dbl << endl
		<< dbl2 << endl;

	// 10.
	auto cars = 15;					// integer
	auto iou = 150.37f;				// float
	auto level = 'B';				// char
	// auto crat = U'/U00002155';	// compilation error
	auto fract = 8.25f / 2.5;		// double

	// exercises
	//1. inches to feet and inches
	const int footToInches = 12;
	int totalHeightInches(0);
	int divHeightFeet(0);
	int modHeightInches(0);

	cout << endl << "Enter your height in inches: ";
	cin >> totalHeightInches;
	cin.get();

	divHeightFeet = totalHeightInches / footToInches;
	modHeightInches = totalHeightInches % footToInches;

	cout << totalHeightInches << " inches equal " << divHeightFeet << " feet and " << modHeightInches << " inches" << endl;

	//2. BMI - body mass index
	const double metersInInch = 0.0254;
	const double kgsInPound = 2.2;
	int weight(0);
	cout << endl << "Enter your mass in pounds: ";
	cin >> weight;
	cin.get();

	// BMI = weightKg / heightM^2
	double bmi = (weight / kgsInPound) / ((totalHeightInches * metersInInch) * (totalHeightInches * metersInInch));

	cout << "Your BMI is: " << bmi << endl;

	//3. latitude
	const int contains = 60;
	double lDegrees(0);
	int lDegree(0);
	int lMinut(0);
	int lSecond(0);

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degree: ";
	cin >> lDegree;
	cin.get();
	cout << "Next, enter the minuts of arc: ";
	cin >> lMinut;
	cin.get();
	cout << "Finally, enter the seconds of arc: ";
	cin >> lSecond;
	cin.get();
	
	lDegrees = (double)lDegree + (double)lMinut / contains + (double)lSecond / (contains * contains);

	cout << lDegree << " degrees, " << lMinut << " minutes, " << lSecond << " seconds = " << lDegrees << " degrees" << endl;

	// 4. seconds to days
	const int secondsInMinute = 60;
	const int minutesInHour = secondsInMinute;
	const int hoursInDay = 24;
	const int daysInYear = 365;
	const int secondsInYear = daysInYear * hoursInDay * minutesInHour * secondsInMinute;
	const int secondsInDay = hoursInDay * minutesInHour * secondsInMinute;
	const int secondsInHour = minutesInHour * secondsInMinute;

	long long seconds(0);

	cout << "Enter the number in seconds: ";
	cin >> seconds;
	cin.get();
	cout << (seconds / secondsInDay) << " days, "
		<< ((seconds % secondsInDay) / secondsInHour) << " hours, "
		<< (((seconds % secondsInDay) % secondsInHour) / secondsInMinute) << " minutes, "
		<< (((seconds % secondsInDay) % secondsInHour) % secondsInMinute) << " seconds" << endl;

	cin.get();
	return 0;
}