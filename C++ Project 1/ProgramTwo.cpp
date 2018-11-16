#include <iostream>
using namespace std;

int main_2() {

	int i = 27;
	int *i_ptr = &i;
	cout << "Value in i is " << i << endl; 
	cout << "Address of i is " << i_ptr << endl; 
	cout << "Value from dereferencing pointer is " << *i_ptr << endl;

	*i_ptr = 35;
	cout << "Value in i is " << i << endl;

	double * d_ptr = NULL;
	cout << "Value in pointer is " << d_ptr << endl;

	if (d_ptr != NULL)
		*d_ptr = 0.25;

	int x = 10;
	int *p = NULL;

	p = &x;
	cout << *p << endl;

	int* p2 = NULL;

	if (p2 == NULL) {
		int x = 10;
		p2 = &x;
	}
	// x falls out of scope as x is undefined
	// p2 is now a dangling pointer
	*p2 = 3;

	return 0;
}