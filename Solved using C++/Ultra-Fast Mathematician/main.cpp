//https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	vector<string> v;
	vector<string>::iterator itr;

	for(int i=0; i<str1.size(); i++){
		if(str1[i]==str2[i])
			v.push_back("0");
		else
			v.push_back("1");
	}

	for(itr=v.begin(); itr!=v.end(); itr++)
		cout << *itr;

	return 0;
}
