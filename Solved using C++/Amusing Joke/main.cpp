//https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	string guest, host, mixed, concat;
	cin >> guest >> host >> mixed;

	concat = guest + host;

	sort(concat.begin(), concat.end());
	sort(mixed.begin(), mixed.end());

	int flag;
	flag = concat.compare(mixed);

	if(!flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
