
#include <iostream>
using namespace std;
#include "Khush.h"
void increment(int a);
int factorial(int number,int total);
int main() {
	//int a = 5;
	//pointer syntex
	//int* p;
	//p = &a;
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
	//cout << p << endl;
	//cout << p + 1 << endl;//increase address by 4, as 1 is integer which is of 4 bytes
	//cout << p + 2 << endl;//increase address by 8, as 2 * 4
	
	//char* p0;
	//p0 = (char*)p;
	/*
	cout << p0 << endl;
	cout << p0 + 1 << endl;
	cout << p0 + 2 << endl;
	*/
	//printf("%d\n", p0);
	//printf("%d\n", p0 + 1);//increase address by 1, as integer is typecast int char which is of 1 byte
	//printf("%d\n", p0 + 2);//increase address by 2, as 2 * 1 

	
	
	//-----------------pointer to pointer------------------//
	/*
	int x = 5;
	int* p = &x;
	*p = 6;
	int** q = &p;
	int*** r = &q;

	printf("%d\n",*p);//6
	printf("%d\n", *q);// address of p
	printf("%d\n", **q);// 6
	printf("%d\n", *r);//address of q
	printf("%d\n", **r);//address of p
	printf("%d\n", ***r);//6
	**q = *p + 2;
	*/

	//-----------use cases of pointers --------------------//
	//--1) pointers as function arguments
	/*int a = 10;
	incrementByValue(a);
	printf("%d\n", a);//a will not increase 
	incrementByReference(&a);
	printf("%d\n", a); // a will increase
	*/

	//-------------Pointers and Arrays--------------//
	/*
	int A[5] = { 2,4,5,6,7 };
	printf("%d\n",A);//address of first element
	printf("%d\n",*A);//value of first element
	//so &A[i] == A + i and A[i] == *(A + i)
	int size = sizeof(A) / sizeof(A[0]);//to find size of array
	int* p = A; //p is pointing at first element of array
	printf("%d", p);
	printf("%d", A);
	*/
	//arrays are always passed to function by reference, so the size of array is not passed as it is not copied


	//----------characters and pointers-----------------//
	/*
	char C[] = "Hello";
	printf("%s",C);
	*/

	//----------Pointer and multi arrays
	/*
	int B[2][3] = { {2,3,6},{4,5,8}};
	int (*A)[3] = B;
	int (*p)[3] = B; //B == &B[0] and *B == B[0] == B[0][0]
	printf("%d and %d and %d and %d\n",B,B[0],&B[0],*B);//address of first row
	printf("%d\n",&B[0]);//address of first row i.e first element
	printf("%d\n",&B[0][0]);//address of first element at first row
	printf("%d\n",*B);//value at [0][0]
	printf("%d\n",B[0]);//address of first row 
	printf("%d and %d\n",*(B+1),B + 1);//address of second row, first element as 1 row is 12 bytes(4 * 3)
	printf("%d and %d also %d and %d\n",B,B[0],B + 1,B[0] + 1);//address of second row, first element as 1 row is 12 bytes(4 * 3)
	printf("%d and %d also %d and %d\n",B,B[1],B + 1,B[1] + 1);//address of second row, first element as 1 row is 12 bytes(4 * 3)
	*/

	//--------challange question
	/*
	int C[3][2][2] = { {{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}} };
	printf("%d %d %d %d",C,*C,C[0],&C[0][0]);//all same
	*/

	//--------------dynamic memory allocation in C----------------//
	/*
	int a;
	int* p;
	p = (int*)malloc(sizeof(int));//malloc asks for how much memory ypu want on heap,, returns a void pointer with address to first byte in heap 
	*p = 10;
	//we have to free this memory if we are not using in heap
	free(p);
	p = (int*)malloc(sizeof(int));//another bit of adress is stored
	*p = 20;
	//for storing an array
	free(p);
	p = (int*)malloc(20*sizeof(int));//like p[20]
	p[3] = 4;
	//if malloc doesn't find anything to store in heap, it will return null
	*/

	//--------------dynamic memory allocation in C++----------------//
		/*
	int a;
	int* p;
	p = new int;
	*p = 10;
	delete p;
	p = new int[20];
	delete[] p;

	//-------------------function pointers---------------//
	int c;
	int (*k)(int, int);//insert arguments type as in function Add
	k = Add; //or
	k = &Add;
	c = (*k)(2, 3);//this is how you call function, or
	c = k(2, 3); 
	*/
	

	//--------------------- pointer to Khush class object and Arrow member selection Operator----------------------//
	//onst int x = 3;
	
	//Khush ks;
	//Khush *ksPointer;
	//ksPointer = &ks;
	//ksPointer -> printCrap();
	
	//------------------constant objects--------------//
	const Khush ks(12,13);
	ks.printCrap();

	//------------------Member Initializer --------------//


}
/*
int Add(int a, int b) {
	
	return a + b;
}
void incrementByValue(int a) {
	a = a + 1;
}
void incrementByReference(int *p) {
	*p = *p + 1;
}
*/