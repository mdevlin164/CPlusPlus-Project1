#include <iostream>
using namespace std;

int main_1() {

	int sample[10];

	for (int t = 0; t < 10; t++)
		sample[t] = t;

	for (int t = 0; t < 10; ++t)
		cout << "Sample (array) [" << t << "]: " << sample[t] << endl;

	int* p = sample;

	for (int t = 0; t < 10; t++)
		*p++ = t * t;

	p = sample;
	for(int t=0; t<10; ++t)
		cout << "Sample (pointer) [" << t << "]: " << *p++ << endl;

	return 0;
}