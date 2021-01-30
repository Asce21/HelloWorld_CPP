
#ifndef HW_H
#define HW_H

#include <iostream>

class HW
{
public:
	//Friend Functions
	friend std::ostream& operator<<(std::ostream& out, const HW& obj);

	//Overloaded Operators
	//Constructors
	HW();

	//Accessor Functions
	//Mutator Functions
	//Destructor
	~HW();

private:
	//Member Variables
	std::string *hwStatement;	//this variable is dynamic

	
};


#endif // !HW_H


