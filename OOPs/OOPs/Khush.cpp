#include "Khush.h"
#include <iostream>
using namespace std;


Khush::Khush(int a,int b) 
	:regVar(a),conVar(b)
{
	std::cout << "I am constructor" << endl;	
}

//deconstructor never has parameters and return values and no overloading
Khush::~Khush(){
	std::cout << "I am deconstructor" << endl;
}
void Khush::printCrap() const{
	cout << regVar << " And "
		<< conVar
		<< endl;
}