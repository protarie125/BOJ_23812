#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}

		for (auto j = 0; j < 3 * n; ++j) {
			cout << ' ';
		}

		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}
		cout << '\n';
	}

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < 5 * n; ++j) {
			cout << '@';
		}
		cout << '\n';
	}

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}

		for (auto j = 0; j < 3 * n; ++j) {
			cout << ' ';
		}

		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}
		cout << '\n';
	}

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < 5 * n; ++j) {
			cout << '@';
		}
		cout << '\n';
	}

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}

		for (auto j = 0; j < 3 * n; ++j) {
			cout << ' ';
		}

		for (auto j = 0; j < n; ++j) {
			cout << '@';
		}
		cout << '\n';
	}

	return 0;
}