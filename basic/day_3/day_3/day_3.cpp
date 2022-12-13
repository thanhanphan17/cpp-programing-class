#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

std::string reverseStr(std::string origin) {
	std::stack<char> st;
	std::string ans = "";

	// a b c d -> d c b a 
	for (int i = 0; i < origin.size(); ++i) {
		st.push(origin[i]);
	}

	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}

	return ans;
}

void solveQuestion2() {
	int n, k, arr[10];

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	std::queue<int> que;
	for (int i = 0; i < n; ++i) {
		que.push(arr[i]);
	}

	std::cin >> k;

	// queue: 1 2 3 4 5
	// que.push(que.front()): 1 2 3 4 5 1
	for (int i = 1; i <= k; ++i) {
		que.push(que.front());
		que.pop();
	}

	while (!que.empty()) {
		std::cout << que.front() << " ";
		que.pop();
	}

}

// custom comparision
bool cmp(const std::pair < std::string, float> a,
	const std::pair < std::string, float> b) {

	return a.second > b.second;
}

void solveQuestion3() {
	// pair<type, type> name;
	std::vector<std::pair < std::string, float>> students;

	students.push_back({ "Thanh An", 10.0 });
	students.push_back({ "Van Toan ", 9.0 });
	students.push_back({ "Thuy Quyen", 10.0 });
	students.push_back({ "Van Xuan", 8.5 });
	students.push_back({ "Quoc Bao", 8.0 });

	sort(students.begin(), students.end(), cmp);

	for (auto x : students) {
		std::cout << x.first << " " << x.second << "\n";
	}
}


int main() {
	

	return 0;
}