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

namespace NameAndAge {

	class Name_pairs {
	public:
		class Invalid {};		//to throw as an exception

		Name_pairs();			//Default constructor
		Name_pairs(string n, double a);  //Constructoe

		int read_names();
		int read_ages();
		int print();
		ostream& output(ostream& os);
		int sort();

		//functions needed to access characteristics or elements of the vectors//

		int length_of_name_vector() const;
		int length_of_age_vector() const;
		string get_name_from_name_vector(int index) const;
		double get_age_from_age_vector(int index) const;

	

	private:
		vector<string> name{};
		vector<double> age{};
		vector<string> temp_name{};
	};

	// Helper functions

	ostream& operator<<(ostream& os, Name_pairs& np);
	bool operator==(const Name_pairs& NPa, const Name_pairs& NPb);
}
