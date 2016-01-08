#include <iostream>

int stoneToLb(int); //function prototype

int main() {
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	cin.get();

	int pounds = stoneToLb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;
	cin.get();

	return 0;
}

int stoneToLb(int sts) {
	return 14 * sts;
}