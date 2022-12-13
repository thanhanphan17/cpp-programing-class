/*
	*01. pointer arithmetic ++ -- + -
	*02. pointer to another pointer
	*03. value-type pointer and reference type pointer
	*04. pointer and 2-d array
	*05. void pointer
	*06. pointer to const
	*07. const pointer
	*08. const pointer to a const value
	*09. reference parameter
	*10. pointer and function
	11. pointer function
*/

#include <iostream>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	return x / y;
}

void doOperation(int a, int b, int(*operation)(int, int)) {
	std::cout << operation(a, b);
}

bool asc(int a, int b) { return a < b;}

bool des(int a, int b) { return a > b; }

void sort(int arr[], int n, bool(*compare)(int, int)) {
	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (compare(arr[j], arr[i])) {
				std::swap(arr[j], arr[i]);
			}
		}
	}
}

int* twiceArray(int arr[], int n) {
	int* ans;


	return ans;
}

int main() {
	int arr[] = { 1, 2, 4, 5, 0 };
	int n = 5;

	sort(arr, n, asc);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}

	return 0;
}
