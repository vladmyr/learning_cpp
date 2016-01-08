#include <iostream>
#include <string>
#include <cstring>

#include "Inflatable.h"
#include "TorgleRegister.h"

using namespace std;

int main() {
	unsigned int option;
	cout << "Chapter 4" << endl 
		<<"Select an option to run:" << endl
		<< "0 - quit;" << endl
		<< "1 - structures;" << endl
		<< "2 - pointers;" << endl
		<< "3 - delete operator;" << endl
		<< "4 - dynamic arrays with new & ponter addition" << endl
		<< "Your option: ";

	(cin >> option).get();
	cout << endl;

	// introducing structure
	if (option == 1) {
		Inflatable guest = {	
			"Glorious Gloria",	// name value
			1.88,				// volume value
			29.99				// price value
		};
		Inflatable pal {		// C++ 11 - can ommit =
			"Audacious Arthur",
			3.12,
			32.99
		};

		cout << "Expand you guest list with " << guest.name 
			<< " and " << pal.name << "!\n"
			<< "You can have both for $"
			<< guest.price + pal.price << "!\n";

		// structure assignment (memberwise assignment)
		Inflatable bouquet = {
			"sunflowers",
			0.20,
			12.49
		};
		Inflatable choice = bouquet; // assign one structure to another

		cout << endl << "bouquet: " << bouquet.name << " for $"
			<< bouquet.price << endl;
		cout << "choise: " << choice.name << " for $"
			<< choice.price << endl;

		// arrays of structures
		Inflatable guests[2] = {	// initialize an array of structs
			{ "Bambi", 0.5, 21.99 },
			{ "Godzilla", 2000, 564.99 }
		};

		cout << endl <<"The guests " << guests[0].name << " and " << guests[1].name
			<< "\nhave a combined volume of "
			<< guests[0].volume + guests[1].volume << " cubic feet.\n";

		TorgleRegister tr = { 14, true, false };
	} else if (option == 2) {
		// addreses and pointers
		int donuts = 6;
		double cups = 4.5;

		cout << "donuts value = " << donuts;
		cout << " and donuts address = " << &donuts << endl;
		cout << "cups value = " << cups;
		cout << " and cups address = " << &cups << endl;

		// listing 4.15
		int updates = 6;
		int *pUpdates;
		long long lLUpdates = 10;
		long long *pLLUpdates;

		pUpdates = &updates; // assign addres of int to pointer
		pLLUpdates = &lLUpdates;

		// express values two ways
		cout << endl << "Values: updates = " << updates
			<< ", *pUpdates = " << *pUpdates << endl;

		// express address two ways
		cout << "Addresses: &updates = " << &updates
			<< ", pUpdates = " << pUpdates << endl;

		// use pointer to change value
		(*pUpdates)++;
		cout << "Now updates = " << updates << endl;
		
		// use sizeof on pointer
		cout << "sizeof(*pUpdates) = " << sizeof(*pUpdates) << endl;
		cout << "sizeof(pUpdates) = " << sizeof(pUpdates) << endl;

		cout << endl << "Address incrementation is based on size of variable type" << endl;
		*pLLUpdates++; // increment address value
		cout << "Addresses: &lLUpdates = " << &lLUpdates
			<< ", pLLUpdates = " << pLLUpdates << endl;

		cout << "sizeof(*pLLUpdates) = " << sizeof (*pLLUpdates) << endl;
		cout << "sizeof(pLLUpdates) = " << sizeof (pLLUpdates) << endl;

		// listing 4.16
		int higgens = 5;
		int *pt = &higgens;

		cout << endl << "Value of higgens = " << higgens
			<< "; Address of higgens = " << &higgens << endl;
		cout << "Value of *pt = " << *pt
			<< "; Value of pt = " << pt << endl;

		// danger
		// long *fellow;		// create a pointer-to-long
		// *fellow = 223323;	// AVOID FOR ANY PRICE

		// pointers and numbers
		// int *pt;
		// pt = 0xB8000000;	// type mismatch
		// pt = (int *) 0xB8000000;	// type match

		// allocating memory with new
		int *pt1 = new int;	// pt point to data object

		// listing 4.17
		int nights = 1001;
		int *ptr = new int;	// allocate space for an int
		*ptr = 1001;			// store a value there

		cout << endl << "nights value = " << nights
			<< ": location = " << &nights << endl;
		cout << "int value = " << *ptr
			<< ": location = " << ptr << endl;

		double *pd = new double;
		*pd = 10000001.0;

		cout << "double value = " << *pd
			<< ": location = " << pd << endl
			<< "location of pointer pd: " << &pd << endl
			<< "size of pt = " << sizeof (ptr)
			<< ": size of *pt = " << sizeof(*ptr) << endl
			<< "size of pd = " << sizeof(pd) 
			<< ": size of *pd = " << sizeof (*pd) << endl;
	} else if (option == 3) {
		int *ps = new int;
		*ps = 10;

		cout << "Pointer ps: value = " << *ps << ", address = " << ps << endl;
		delete ps;		// free memory with delete
		// delete ps;	// AVOID: the result of deleting twice is undefined
						// it is safe to apply delete to a null pointer
		cout << "Pointer ps was deleted" << endl;
		// cout << "Now pointer ps: value = " << *ps << ", address = " << ps << endl;
		// cout << "Accessing deleted pointer throws an access violation error" << endl;

		// reuse existing pointer
		ps = new int;		// allocate memory
		int *pq = ps;		// set second pointer to same block

		*ps = 11;

		cout << endl << "Pointer ps: value = " << *ps << ", address = " << ps << endl;
		cout << endl << "Pointer pq: value = " << *pq << ", address = " << pq << endl;

		delete pq;			// delete with seconf pointer

		cout << "Pointers ps & pq have same address." << endl 
			<< "Pointer pq was deleted." << endl;
		cout << "Pointer ps: value = " << *ps << ", address = " << ps << endl;
	} else if (option == 4) {
		// DO NOT DO IT: result is not defined
		// int *pt = new int;
		// delete [] pt;

		// short *ps = new short[500];
		// delete ps;

		// dynamic arrays with new
		int *psome = new int[10];	// get a block of 10 ints
		//delete [] psome;			// delete an array not just the first element

		cout << "Dynamic array *psome" << endl
			<< "Value of *psome = " << *psome << endl
			<< "Value of psome[0] = " << psome[0] << endl
			<< "Note: they are the same." << endl;

		// listing 4.18, p. 166
		double *p3 = new double[3];
		p3[0] = 0.2;
		p3[1] = 0.5;
		p3[2] = 0.8;

		cout << endl << "p3[1] is " << p3[1] << endl;
		p3 = p3 + 1;	// increment the pointer, does not work for array names
		cout << "Now p3[0] is " << p3[0] << " and "
			<< "p3[1] is " << p3[1] << endl;
		p3 = p3 - 1;	// point back to beginning
		delete [] p3;	// free the memory

		// pointers, arrays, and pointer arithmetic
		double wages[3] = {10000.0, 20000.0, 30000.0};
		short stacks[3] = {3, 2, 1};
		
		// here are two ways to get the address of an array
		double *pw = wages;			// nome of an array = address
		short *ps = &stacks[0];		// or use address operator

		// with array element
		cout << endl << "pw = " << pw << ", *pw = " << *pw << endl;
		pw = pw + 1;
		cout << "add 1 to the pw pointer:\n"
			<< "pw = " << pw << ", *pw =" << *pw << "\n\n";
		cout << "ps = " << ps << ", *ps = " << *ps << endl;
		ps = ps + 1;
		cout << "add 1 to the ps pointer:\n";
		cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

		cout << "Access two elements with array notation:\n"
			<< "stack[0] = " << stacks[0] 
			<< ", stack[1] = " << stacks[1] << endl;
		cout << "Access two elemetns with pointer notation:\n"
			<< "*stacks = " << *stacks 
			<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

		cout << sizeof(wages) << " = size of wages array\n"	// sizeof array
			<< sizeof(pw) << " = size of pointer\n";		// sizeof pointer

		// notes
		// arrayname[i]		becomes		*(arrayname + i)
		// pointername[i]	becomes		*(pointername + i)

		short tell[10];			// tell an array of 20 bytes
		cout << endl << "tell = " << tell << endl;	// displays &tell[0]
		cout << "&tell = " << &tell << endl;		// displays address of whole array
													// is an address of 20 bytes block
		cout << "(tell + 1) = " << (tell + 1) << " (added 2 bytes)" << endl;	// adds 2 bytes
		cout << "(&tell + 1) = " << (&tell + 1) << " (added 20 bytes)" << endl;	// adds 20 bytes

		short (*pas)[10] = &tell; // pas points to array of 20 shorts;
	}

	cout << endl << "Press \"Enter\" to exit";
	cin.get();
	return 0;
}