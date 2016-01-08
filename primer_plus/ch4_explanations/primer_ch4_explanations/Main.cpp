#include <iostream>
#include <climits>
#include <cstring>
#include <string>

using namespace std;

// From chapter 3
unsigned int bytesToBits(int bytes) {
	return bytes * CHAR_BIT;
}

// Chapter 4
int main() {
	int n = 10;
	unsigned short months[12];
	unsigned int arr[3] = { 9, 12, 8456 };

	// Obtain the size of the array arr
	cout << "sizeof(n) = " << sizeof(n) << " bytes = "<< bytesToBits(sizeof(n)) << endl;
	cout << "sizeof(arr) = " << sizeof(arr) << endl;
	cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;
	cout << "arr length = " << sizeof(arr) / sizeof(arr[0]) << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	cout << "Referring to unexisting array index: " << arr[3] << endl;

	int yams[3] = { 7, 8, 6 };			// shortcut assignment
	int yamcosts[3] = { 20, 30, 5 };

	cout << endl << "Total yams = "
		<< yams[0] + yams[1] + yams[2] << endl
		<< "The package with " << yams[1] << " yams consts "
		<< yamcosts[1] << " cents per yam.\n";

	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] + yams[3];

	cout << "The total yam expence is " << total << " cents.\n";
	cout << "\nSize of yams array = " << sizeof(yams) << " bytes.\n";
	cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n" << endl;

	// array initialization
	int cards[4] = { 3, 6, 9, 12 };	// shortcut assignment can be used only whie defining array
	int hand[4];
	// hand[4] = { 5, 6, 7, 8 };	// not allowed
	// hand = cards;				// not allowed
	
	// only first element explicitly initialized. 
	// Rest will have value 0
	long totals[500] = { 1 };
	// Not good practice but has exceptions (1) ! The size is defined by the  
	// number of elements in shortcut assignment
	short things[] = { 1, 3, 5, 7 };

	// C++ 11: equal sign omitted
	long cars[5] { 1, 2, 3, 4, 5 };
	// C++ 11: empty braces - all elements set to 0
	int books[100] {};
	char tlifs[4] { 'h', 'i', 112, '\0' };

	// strings
	// C-style - the last character must always be null ('\0' - string end)
	char dog[9] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I', '\0' };
	char bird[11] = "Mr. Cheeps";	// the '\0' is understood
	// let the compiler count
	// (1) in case of defining string it is affordable
	char fish[] = "Bubbles";		

	// String cannot be assigned to character.
	// "S" represents the memory address at which the string is stored,
	// therefore attempt to assign the memory address to variable fails
	// char shirtSize = "S";	// illegal type missmatch

	// string literals concatenation
	cout << endl << "String " "literals " "concatenation!" << endl;

	// using string in an array
	const int ArSize = 20;
	char name[ArSize];	// emptry array
	char name2[ArSize] = "C++owboy";

	cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
	cin >> name;
	cin.get();
	cout << "Well, " << name << ", your name has " << strlen(name) << " letters and is stored " << endl
		<< "in an array of " << sizeof(name) << " bytes" << endl
		<< "Your initial is " << name[0] << "." << endl;

	name2[3] = '\0';	// set null character

	cout << "Here are the first three characters of my name " << name2 << endl;

	// line-oriented input with get()
	char dessert[ArSize];
	
	// cout << endl << "Enter your name:\n";
	// cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

	// mixing string and numeric input
	const int AddressSize = 80;
	unsigned int year(0);
	char address[AddressSize];

	cout << endl << "What year wsas your house built?\n";
	// cin >> year	// leaves '\n' (Enter key press) in input queue 
					// therefore you'll never be able to write address
	(cin >> year).get();	
	cout << "What is its street address?\n";
	cin.get(address, AddressSize).get();
	cout << "Year build: " << year << endl
		<< "Address: " << address << endl
		<< "Done!\n";

	// string class
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panter";

	cout << endl <<"Enter a kind of feline: ";
	(cin >> charr1).get();
	cout << "Enter another king of feline: ";
	(cin >> str1).get();
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;

	//C++ 11 string initialization
	char date[] = { "Le chapon Dodu" };
	char secondDate[]{"The Elegant Plate"};
	string thirdDate = { "The Bread Bowl" };
	string forthDate{ "Hank's Fire Eats" };

	// assignment, concatenation, and appending
	// charr1 = charr2			// not valid - no array assignment
	str1 = str2;				// valid
	string str3 = str1 + str2;	// concatenation

	string s1 = "penguin";
	string s2;
	string s3;

	cout << endl << "You can assign one string object to another: s2 = s1: \n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;
	cout << "You can concatenate string: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

	// More string class operations
	const unsigned int Size = 20;
	char ch1[Size];
	char ch2[Size] = "jaguar";
	string string1;
	string string2 = "panther";
	
	// assignment for string object ansd character arrays
	string1 = string2;	// copy string1 to string2
	strcpy_s(ch1, ch2);	// copy ch2 to ch1

	// appending for string objects and character arrays
	string1 += " paste";	// add paste to end of string1
	strcat_s(ch1, " juice");	// add juice to end of ch1

	// finding the length of a string object and a C-style string
	unsigned int l1 = string1.size();	// obtain length of string1
	unsigned int l2 = strlen(ch1);		// obtain length ch1

	cout << "The string \"" << string1 << "\" contains " << l1 << " characters.\n"
		<< "The string \"" << ch1 << "\" contains " << l2 << " characters.\n";

	// string class I/O
	char ch[Size];
	string str;

	// length: 29 (not 20) because:
	// - contents of uninitialize array are undefined;
	// - strlen counts bytes until it reaches null character
	cout << endl << "Length of string is ch before input: " << strlen(ch) << endl;
	cout << "Legnth of string in str before input: " << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(ch, Size);	// indicate manimum length
	cout << "You entered: " << ch << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);		// cin now an argument; no length specifier
	cout << "You entered: " << str << endl;
	cout << "Length of string in ch after input: " << strlen(ch) << endl;
	cout << "Length of string in str after input: " << str.size() << endl;

	// other forms of string literals
	wchar_t title[] = L"Chief Astrogator";
	char16_t name[] = u"Felonia Ripova";
	char32_t car[] = U"Humber Super Snipe";

	// Does not word here :(
	// cout << R" (Jim "King" Tutt uses "\n" instead of endl. )" << '\n';

	cin.get();
	return 0;
}