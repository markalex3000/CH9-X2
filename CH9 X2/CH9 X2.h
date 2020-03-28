#pragma once

/*
Design and implement a Name_pairs class holding (name,age) pairs where name is a string and age
is a double. Represent that as a vector<string> (called name) and a vector<double> (called age) 
member. Provide an input operation read_names() that reads a series of names. Provide a 
read_ages() operation that prompts the user for an age for each name. Provide a print() 
operation that prints out the (name[i],age[i]) pairs (one per line) in the order determined 
by the name vector. Provide a sort() operation that sorts the name vector in alphabetical 
order and reorganizes the age vector to match. Implement all “operations” as member functions. 
Test the class (of course: test early and often).

This is the header file with the Class definition
*/

namespace CH9X2 {

	class Name_pairs {
	public:
		class Invalid {};		//to throw as an exception

		Name_pairs();			//Default constructor
		~Name_pairs();			//default destructor

		int read_names();
		int read_ages();
		int print();
		int sort();

	private:
		vector<string> name{};
		vector<double> age{};
		vector<string> temp_name{};
	};
}
