#pragma once
#include "Birthday.h"

class People
{
public:
	People(char* name,Birthday dob);
	void printInfo();
protected:
private:
	char* name;
	Birthday dob;

};

