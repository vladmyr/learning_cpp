#include <iostream>
#include <climits>
#include <cfloat>
#include <cmath>

#define ZERO 0	// use preprocessor to define constants - the C way

using namespace std;

unsigned int bytesToBits(int);
unsigned long long valuesRange(int);

unsigned int bytesToBits(int bytes) {
	return bytes * CHAR_BIT;
}

int main() {
	int count(0);
	cout << "Address: " << &count << "; Value: " << count << endl;

	// variable declaration
	int poddle;		// valid
	int Poodle;		// valid, distinct fomr "poddle"
	int _Mystars3;	// valid but reserved - starts with underscore
	int __fools;	// valid but reserved - starts with dwo underscores
	int the_very_best_variable_i_can_be_version_112; // valid

	// integer types - numbers with no fractial parts
	short nShort = SHRT_MAX;	// another initialization using equals sign
	int nInteger(INT_MAX);		// initialization using parentheses - stick to this
	long nLong(LONG_MAX);
	long long nLongLong(LLONG_MAX);
	// C++ 11 initalization
	// int emus{9};
	// int rheas = {12};
	// int rosc = {};	// set to 0
	// int psychics{};	// set to 0
	
	cout << endl << "Bits per byte = " << CHAR_BIT << endl;
	cout << endl << "Size of some integer types" << endl;
	cout << "  short holds " << bytesToBits(sizeof nShort) << " bits, maximum value is " << nShort << endl;
	cout << "  int holds " << bytesToBits(sizeof nInteger) << " bits, maximum value is " << nInteger << endl;
	cout << "  long holds " << bytesToBits(sizeof nLong) << " bits, maximum value is " << nLong << endl;
	cout << "  long long holds " << bytesToBits(sizeof nLongLong) << " bits, maximum value is " << nLongLong << endl;

	// luckily compiler informs wherer varialbe is not initialized
	int uncles(5);
	int aunts(5);
	int chairs = uncles + aunts + 4;
	cout << endl << "Amount of chairs = " << chairs << endl;

	// exceeding some integer limits
	short sam(SHRT_MAX);
	unsigned short sue(sam);

	cout << endl << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited. Add $1 to each accout." << endl;

	sam += 1;
	sue += 1;

	cout << "Now Sam has " << sam << "dollars and Sue has " << sue
		<< "dollars deposited." << endl << "Poor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;

	cout << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited. Take $1 from each account." << endl;

	sam -= 1;
	sue -= 1;

	cout << "Now Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars depostied." << endl << "Lucky Sue!" << endl;

	// integers in base 10, base 8 - unix, base 16 - hex
	int chest(42);		// decimal integer literal, base 10
	int waist(0x42);	// hexadecimal integer literal , base 16
	int inseam(042);	// octal integer literal, base 8

	cout << endl << "Monsieur cuts a striking figure!" << endl
		<< "cheast = " << chest << " (42 in decimal)" << endl
		<< "waist = " << waist << " (0x42 in hex)" << endl
		<< "inseam = " << inseam << " (042 in octal)" << endl;

	chest = 42;
	waist = chest;
	inseam = chest;

	cout << endl << "Monsieur cuts a striking figure!" << endl
		<< "cheast = " << chest << " (decimal for 42)" << endl
		<< hex
		<< "waist = " << waist << " (hexadecimal for 42)" << endl
		<< oct
		<< "inseam = " << inseam << " (octal for 42)" << endl;

	// char
	signed char cChar(0); // stores integer value, signed keyword ensures that the range is trully signed
	cout << endl << "Enter a character: ";
	// cin converts symbol into its integer representation
	cin >> cChar; 
	cin.get();
	// cout converts integer into actual symbol
	cout << "Hola! Thank you for the " << cChar << " character." << endl; 

	cChar = 'M';
	int i(cChar);

	cout << endl << "The ASCII code for " << cChar << " id " << i << endl
		<< "Add one to the character code:" << endl;
	cChar++;
	i = cChar;
	cout << "The ASCII code for " << cChar << " is " << i << endl
		<< "Displaying char cChar using count.put(cChar): ";
	// using the cout.put() member function to display a char
	cout.put(cChar);
	// using cout.put() to display a char constant
	cout.put('!');

	// char literals
	unsigned char alarm = '\a'; // beep-beep sound :)
	cout << endl << alarm << "Don't do that again!\a\n"
		<< "Ben \"Buggsie\" Hacker\nwas here!\n";

	unsigned char hexCtrlZ = 0x1a;	// ctrl + z in hexadecimal
	unsigned char octCtrlZ = 032;	// ctrl + z in octal
	unsigned char cCtrlZ = '\x1a';	// or \032 - symbolic variant are preferable

	cout << endl << "Hi" << hexCtrlZ << octCtrlZ << cCtrlZ << " there" << endl;

	// using escape sequences
	long code;

	cout << endl << "\aOperation \"HyperHype\" is now activated!\n"
		<< "Enter you agent code:________\b\b\b\b\b\b\b\b";
	cin >> code;
	cin.get();
	cout << "\aYou entered " << code << "...\n" // ??? not the same as I entered
		<< "\aCode varified Process with Plan Z3!\n";

	// wchar_t - wide char type - 2 byte
	wchar_t bob = L'P';			// a wide-character constant
	wcout << L"tall" << endl;	// outputting a wide -character constant

	// C++ 11 char16_t & char32_t
	char16_t char16T = u'q';			// basic character in 16-bit form
	char32_t char32T = U'\U0000222B';	// universal character name in 32-bit form

	// bool type
	bool isReady(true);
	int ans(true);			// bool can be converted to integer: true -> 1, false -> 0
	int promise(false);

	// const
	const int Months(12); //Months is symbolic constant of 12;

	// Floating point numbers
	// Two ways of declaring floating point numbers
	float pi = 3.14;
	float flt = 3.45e6;		// 3.45 * 1000000 = 3450000, 6 - exponent, 3.45 - mantissa
	float flt2 = 2.42E+8;	// + can be omitted
	float flt3 = 8.33e-5;	// 8,33 / 100000 = 0,0000833

	// floating point types
	float f(FLT_MAX);
	double d(DBL_MAX);
	long double ld(LDBL_MAX);

	cout << "float holds " << bytesToBits(sizeof(f)) << " bits, maximum value is " << f << endl;
	cout << "double holds " << bytesToBits(sizeof(d)) << " bits, maximum value is " << d << endl;
	cout << "long double holds " << bytesToBits(sizeof(ld)) << " bits, maximum value is " << ld << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed point
	float tub = 10.0 / 3.0;		// good to about 6 places
	double mint = 10.0 / 3.0;	// good to about 15 places
	const float million = 1.0e6;

	cout << endl << "tub = " << tub
		<< ", a million tubs = " << million * tub
		<< ",\nand then milllion tybs = " << 10 * million * tub << endl
		<< "mint = " << mint << " and a million mints = " << million * mint << endl;

	// floating-point constants
	// 1.234f		// a float constant
	// 2.345E20F	// a float constant
	// 2.34524E28	// a double constant
	// 2.2L			// a long double constant

	float a = 2.34E+22f;	// float holds only 6 or 7 digits
	float b = a + 1.0f;		// attempt to add 1 to 23rd digit -> has no effect on the value

	cout << "a = " << a << endl
		<< "b - a = " << b - a << endl;	// therefore result is 0

	// Arithmetics, % - modulus
	int div = 17 / 5;	// returns 3, fractional part discarded
	int mod = 17 / 5;	// returns 2, works only with integers

	float hats;
	float heads;

	cout << endl << "Enter a number: ";
	cin >> hats;
	cin.get();
	cout << "Enter another number: ";
	cin >> heads;
	cin.get();

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;	// 61.419998 - limited capacity of type float;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	// division diversion
	cout << "Integer division: 9 / 5 = " << 9 / 5 << endl
		<< "Floating-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl
		<< "Mixed division: 9.0 / 5 = " << 9.0 / 5 << endl
		<< "double constants: 1e7 / 9.0 = " << 1e7 / 9.0 << endl	// doubles as default
		<< "float constants: 1e7f / 9.0f = " << 1e7f / 9.0f << endl;

	const int poundsPerStone = 14;
	int pounds = 0;

	cout << endl << "Enter your weight in pounds: ";
	cin >> pounds;
	cin.get();
	int stone = pounds / poundsPerStone;
	int pounds2 = pounds % poundsPerStone;

	cout << pounds << " pounds are " << stone << " stone, " << pounds2 << " pound(s)." << endl; // ??? - incorrect pounds value

	// conversion on initialization and assignment
	float three = 3;	// int converted to float
	int guess(3.9832);	// double converted to int
	int debt = 7.2e12;	// result not define in C++

	cout << "tree = " << three << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	// conversion in expressions
	short chickens = 20;
	short ducks = 35;
	short fowl = chickens + ducks;	// convert chickens and ducks to int, add values, convert back to short

	// type casts
	short var = 10;
	cout << "type cast: int(var), (int)var static_cast<long> (var): " 
		<< int(var) << ", " 
		<< (int)var << ", "
		<< static_cast<long> (var) << endl;

	// example
	int auks;
	int bats;
	int coots;

	auks = 19.99 + 11.99;
	bats = (int) 19.99 + (int) 11.99;	// old C syntax
	coots = int(19.99) + int(11.99);	// new C++ syntax
	
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is " << int(ch) << endl
		<< "Yes, the code is " << static_cast<int>(ch) << endl;

	// C++ 11 auto
	auto n = 100;		// n is int
	auto x = 1.5;		// x is double
	auto y = 1.3e12L;	// y is long double

	cin.get();
	return 0;
}