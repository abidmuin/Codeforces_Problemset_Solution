//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	long long int test_cases = 0;
	cin >> test_cases;

	long long int neg=0, pos=0, total=0;

	//Even
	if(test_cases%2==0){
		//positive part
		long long int n=0;
		n = test_cases/2;
		pos = n*(n+1);	//sum = n(n+1)

		//negative part
		neg = n*n;	//sum= (n^2)

		total = pos - neg;
	}
	//Odd
	else if(test_cases%2!=0){
		long long int n=0;
		n = test_cases/2;
		pos = n*(n+1);

		n = n+1;
		neg = n*n;

		total = pos - neg;
	}

	cout << total << endl;

	return 0;
}
