//https://codeforces.com/problemset/problem/750/A

#include <iostream>

using namespace std;

int main() {
	int n = 0, k = 0, total = 240, remaining_time = 0, solved = 0;
	cin >> n >> k;
	remaining_time = total - k;

	for (int i = 1; i <= n; i++) {
		if (remaining_time >= (5 * i)) {
			remaining_time = remaining_time - 5 * i;
			solved = i;
		} else {
			break;
		}
	}

	cout << solved << endl;

	return 0;
}
