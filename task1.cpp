#include <iostream>

void task1(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}