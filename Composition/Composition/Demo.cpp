#include "Demo.h"
#include <iostream>

using namespace std;

Demo::Demo(int a) {
	h = a;
}
void Demo::printCrap() {
	cout << "h = " << h <<endl;//c++ assumes you are working in this
	cout << "this->h = " << this-> h<<endl;//this stores he address of object we are dealing with ie d
	cout << "(*this).h = " << (*this).h << endl;//if we derefernce this we get object ie d and d.h is value of h
}