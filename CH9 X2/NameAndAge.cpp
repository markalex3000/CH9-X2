/*  Program Description
Design and implement a Name_pairs class holding (name,age) pairs where name is a string
and age is a double. Represent that as a vector<string> (called name) and a vector<double> 
(called age) member. Provide an input operation read_names() that reads a series of names. 
Provide a read_ages() operation that prompts the user for an age for each name. 
Provide a print() operation that prints out the (name[i],age[i]) pairs (one per line) 
in the order determined by the name vector. Provide a sort() operation that sorts the 
name vector in alphabetical order and reorganizes the age vector to match. Implement all
“operations” as member functions. Test the class (of course: test early and often).

This file contains the Definitions for the class used in NameAndAge

*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"
#include "NameAndAge.h"

namespace NameAndAge {


	/*
	member funcion definitions
	*/

	Name_pairs::Name_pairs()				//Default Constructor
		: name{ "Placeholder" },
		age{ 0 },
		temp_name{ "TempPlaceholder" }
	{
	}

	Name_pairs::Name_pairs(string n, double a)   //Constructor
		: name{ n }, age{ a }, temp_name{ n }
	{
	}

	int Name_pairs::read_names() {
		string temp_s{ "" };
		int count{ 0 };
		cout << "Enter names (\'X\' to exit): ";
		while (cin >> temp_s) {
			if (temp_s != "X") {
				if (count == 0)
				{
					name.pop_back();
					age.pop_back();
					temp_name.pop_back();
				}
				count++;
				name.push_back(temp_s);
				continue;
			}
			else break;
		}
		return count;
	}

	int Name_pairs::read_ages() {
		int count{ 0 };
		double temp_age{ 0 };
		cout << "Enter an age for each name. \n";
		for (string s : name) {
			cout << "Age of " << s << " is?  ";
			cin >> temp_age;
			age.push_back(temp_age);
			count++;
			cout << "\n";
		}
		return count;
	}
	
	int Name_pairs::print() {
		int count{ 0 };
		auto age_itr = age.begin();
			for (string s : name) {
				cout << s << " is " << *age_itr << '\n';
				age_itr++;
				count++;
			}
			return count;
		}
	

	int Name_pairs::sort() {
		NameAndAge::Name_pairs Sorted_NP;
		
		int va_index{ 0 };
		int sa_index{ 0 };

		int count{ 0 };
	
		Sorted_NP.name = name;
		Sorted_NP.age = age;

		std::sort(Sorted_NP.name.begin(), Sorted_NP.name.end());
		for (string s : Sorted_NP.name) {
			va_index = 0;
			for (auto vn_itr = name.begin(); vn_itr < name.end(); vn_itr++) {
				if (s == *vn_itr) Sorted_NP.age.at(sa_index) = age.at(va_index);
				va_index++;
			}
			sa_index++;
			count++;
		}
		name = Sorted_NP.name;
		age = Sorted_NP.age;
		return count;
	}
}  //end namespace