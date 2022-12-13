#include <iostream>

#define cout std::cout

int main() {
	int a = 5;
	int* ptr; // auto allocated
	// seft-create an adress
	*ptr = 10; // wrong

	return 0;
}