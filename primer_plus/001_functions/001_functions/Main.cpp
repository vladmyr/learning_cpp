#include <iostream>
#include <cmath>

int main() {
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	cin.get();

	double side = sqrt(area);
	cout << "That's the equivalent of square " << side << " feet to the side." << endl;
	cout << "How fantastic!" << endl;
	cin.get();

	return 0;
}