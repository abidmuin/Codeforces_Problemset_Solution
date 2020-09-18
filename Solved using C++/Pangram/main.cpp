//https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	int test_cases = 0;
	cin >> test_cases;

	set<char> s;
	while(test_cases--){
		char temp;
		cin >> temp;

		//lower case conversion
		if(temp >='A' && temp<='Z')
			temp = temp + 32;

		s.insert(temp);
	}

	if(s.size()==26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
