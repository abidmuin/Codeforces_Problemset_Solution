//https://codeforces.com/problemset/problem/510/A

#include <iostream>

using namespace std;

int main() {
	int n = 0, m = 0;
	cin >> n >> m;
	bool dotLeft = true;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0 && i != 1 && dotLeft) {
			for (int j = 1; j < m; j++) {
				cout << ".";
			}
			cout << "#";
			dotLeft = false;
		} else if (i % 2 == 0 && i != 1 && !dotLeft) {
			cout << "#";
			for (int j = 2; j <= m; j++) {
				cout << ".";
			}
			dotLeft = true;
		} else {
			for (int j = 1; j <= m; j++) {
				cout << "#";
			}
		}
		cout << endl;
	}
	return 0;
}
