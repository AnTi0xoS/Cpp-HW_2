#include <algorithm>
#include <iostream>


void task9() {
	int arr[10] = { -2, 1, -5, 2, 3, -3, -1, 1, -2, 1 };
	int new_arr[10];
	int new_arr2[10];
	for (int count = 0; count < 10; ++count) {
		if (arr[count] < 0) {
			new_arr[count] = arr[count];
			new_arr2[count] = 100000000;
		}
		else {
			new_arr2[count] = arr[count];
			new_arr[count] = 100000000;
		}
	}
	int k = 0;
	std::sort(std::begin(new_arr), std::end(new_arr));
	std::sort(std::begin(new_arr2), std::end(new_arr2));
	for (int count = 0; count < 10; ++count) {
		if (new_arr[count] != 100000000) {
			arr[k] = new_arr[count];
			k = k + 1;
		}
	}
	for (int count = 9; count > -1; --count) {
		if (new_arr2[count] != 100000000) {
			arr[k] = new_arr2[count];
			k = k + 1;
		}
	}
	for (int count = 0; count < 10; ++count) {
		std::cout << arr[count] << ' ';
	}
}