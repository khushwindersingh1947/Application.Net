// Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Khush.h"
#include <iostream>

using namespace std;
int main()
{
	Khush a(34);
	Khush b(43);
	Khush c;

	//c = a + b; //c++ already know that we have + operator defined to add num of all objects
	//c is return value, a is current object and b is parameter to the operator function

	int g;
	cin >> g;
	int* i = (int*)malloc(g*sizeof(int));
	*(i + 1) = 5;
	*(i + 100) = 3;
	cout << *(i + 100) << endl;
	

	int *arr = new int[g];//way to declare array when size is unknown
	*(arr + 1) = 12;
	cout << *(arr + 1) << endl;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
