#include <iostream>


void task7() {
	int arr[10] = { -2, 1, -5, 2, 3, -3, -1, 1, -2, 1 };
	int k = 0;
	for (int count = 1; count < 9; ++count) {
		if (arr[count] < arr[count - 1] & arr[count] < arr[count + 1]) {
			k = k + 1;
		}
	}
	std::cout << '\n' << k<<'\n';
}