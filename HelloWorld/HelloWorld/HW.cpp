#include "HW.h"

#include <iostream>
#include <string>

//Friend Functions
std::ostream& operator<<(std::ostream& out, const HW& obj) {
	//Write object to the stream
	out << *obj.hwStatement;

	//Return the stream
	return out;
}//End of the insertion operator function that shows what it means to print an object of this class

//Overloaded Operators
//Constructors
HW::HW()
{
	hwStatement = new std::string();
	*hwStatement = "Hello World!";
}//End of the default constructor

//Accessor Functions
//Mutator Functions
//Destructor
HW::~HW()
{
	//this statements free dynamically allocated data to prevent memory leaks
	delete hwStatement;
	hwStatement = nullptr;
}//End of the destructor
