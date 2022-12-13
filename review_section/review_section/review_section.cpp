#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

bool isEqual(char const* s1, char const* s2) {
	if (strlen(s1) != strlen(s2)) {
		return false;
	}

	for (int i = 0; i < strlen(s1); ++i) {
		if (s1[i] != s2[i]) {
			return false;
		}
	}

	return true;
}

bool palindrome1(char const* str) {
	char* reverseOder = new char[strlen(str)];

	for (int i = 0; i < strlen(str); ++i) {
		reverseOder[strlen(str) - i - 1] = str[i];
	}
	reverseOder[strlen(str)] = '\0';
	
	if (isEqual(str, reverseOder)) {
		return true;
	} 
	return false;
}

bool palindrome2(char const* str) {
	bool ans = true;
	for (int i = 0; i < strlen(str); ++i) {
		if (str[i] != str[strlen(str) - i - 1]) {
			ans = false;
		}
	}

	return ans;
}

bool palindrome2(char const* str) {
	int left = 0;
	int right = strlen(str) - 1;

	while (left < right) {
		if (str[left] != str[right]) {
			return false;
		}
		left++;
		right--;
	}

	return true;
}

bool isPalindrome(char* str) {
	char* front = str; // address of first character
	char* back = str + strlen(str) - 1;
	while (front < back) {
		// Complete code here
	}
	return true;
}


// left = 0
// right = strlen(str) - 1
// abcdadeba

int main() {
	vector<int> vec;
	vec.push_back(10);
	return 0;
}
