//https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	int test_cases = 0;
	cin >> test_cases;

	vector<long long int> v;
	vector<long long int>::iterator itr;

	while(test_cases--){
		long long int temp=0;
		cin >> temp;

		if(temp%2==0){
			long long int result = (temp/2) -1;
			v.push_back(result);
		}
		else{
			long long int result = (temp/2);
			v.push_back(result);
		}
	}

	for(itr=v.begin(); itr!=v.end(); itr++)
		cout << *itr << endl;
	return 0;
}
