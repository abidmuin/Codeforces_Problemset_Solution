//https://codeforces.com/problemset/problem/1367/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n=0;
	cin >> n;

	vector<string> in, out;
	vector<string>::iterator itr;

	while(n--){
		string temp;
		cin >> temp;
		in.push_back(temp);
	}

	for(int i=0; i<in.size(); i++){
		string current = in[i];
		string temp;
		temp = current[0];

		for(int j=1; j<current.size()-1; j+=2)
			temp += current[j];
		temp += current[current.size()-1];

		out.push_back(temp);
	}

	for(itr=out.begin(); itr!=out.end(); itr++)
		cout << *itr << endl;

	return 0;
}
