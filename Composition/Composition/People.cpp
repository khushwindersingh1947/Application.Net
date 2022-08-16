#include "People.h"
#include <iostream>
using namespace std;

People::People(char* name, Birthday dob)
:dob(dob)
{
	
	
}
void People::printInfo() {
	cout << "Name:" << name << " DOB:";  
	dob.printDate();
}