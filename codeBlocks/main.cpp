#include <iostream>

using namespace std;

int main()
{
    int a = 5;
	//pointer syntex
	int* p;
	p = &a;
	/*
	cout << p <<endl;
	cout << *p << endl; //deferencing
	cout << &p << endl;
	a = 6;
	cout << *p << endl;
	*p = 8; //a is changed
	*/
	// pointer arithmatic
	/*
	cout << p << endl;
	cout << p + 2; // address + 2
	p = p + 2;
	cout << *p << endl;
	*/
	cout << p << endl;
	cout << p + 1 << endl;
	cout << p + 2 << endl;

	char* p0;
	p0 = (char*)p;
	cout << p0 << endl;
	cout << p0 + 1 << endl;
	cout << p0 + 2 << endl;
    return 0;
}
