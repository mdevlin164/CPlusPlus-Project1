#include "ProgramThree.h"
#include <iostream>
using namespace std;

int count_occourances(int* x, int n, int t) {
	int count = 0;
	for (int i = 0; i < n; i++)
		if (x[i] == t)
			count++;
	return count;
}

bool same_elements(int* a, int* b, int n) {
	for (int i = 0; i < n; i++)
		if (count_occourances(a, n, a[i]) != count_occourances(b, n, a[i]))
			return false;
	return true;
}

int main() {
	int arraya[8] = { 121, 144, 19, 161, 19, 144, 19, 11 };
	int arrayb[8] = { 11, 121, 144, 19, 161, 19, 144, 19 };

	if (same_elements(arraya, arrayb, 8))
		cout << "The arrays are the same" << endl;
	else
		cout << "The arrays are not the same" << endl;

	return 0;
}