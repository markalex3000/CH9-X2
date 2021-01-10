/*  Program Description
Design and implement a Name_pairs class holding (name,age) pairs where name is a string
and age is a double. Represent that as a vector<string> (called name) and a vector<double>
(called age) member. Provide an input operation read_names() that reads a series of names.
Provide a read_ages() operation that prompts the user for an age for each name.
Provide a print() operation that prints out the (name[i],age[i]) pairs (one per line)
in the order determined by the name vector. Provide a sort() operation that sorts the
name vector in alphabetical order and reorganizes the age vector to match. Implement all
“operations” as member functions. Test the class (of course: test early and often).

This file contains the main loop.

*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"
#include "NameAndAge.h"

/*
global variables
*/



/*
function declarations
*/



/*
main
*/

int main() {
	NameAndAge::Name_pairs TheList;
	NameAndAge::Name_pairs TheOtherList;
	int counter{ 0 };

	counter = TheList.read_names();
	cout << "Read " << counter << " names.\n";

	counter = TheList.read_ages();
	cout << "Read " << counter << " ages.\n";

	cout << "Printing the list of names and ages...\n\n";
	counter = TheList.print();
	cout << "Printed out " << counter << " Name and Age pairs...\n\n";

	counter = TheOtherList.read_names();
	cout << "Read " << counter << " names.\n";

	counter = TheOtherList.read_ages();
	cout << "Read " << counter << " ages.\n";

	cout << "Printing the list of names and ages...\n\n";
	counter = TheOtherList.print();
	cout << "Printed out " << counter << " Name and Age pairs...\n\n";

	cout << "Printing the list of names and ages using the operator and output...\n\n";
	cout << TheList;

	/*
	cout << "Sorting...\n";
	cout << "Sorted " << TheList.sort() << " name pairs:\n";
	counter = TheList.print();
	*/

	if (TheList == TheOtherList)
	{
		cout << "The lists are the same!\n";
	}
	else cout << "The lists are NOT the same!\n";

	keep_window_open();
}


/*
funcion definitions
*/


