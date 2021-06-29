//https://codeforces.com/problemset/problem/155/A
#include <iostream>
using namespace std;

int main() {
	int n = 0, temp = -1, result=0;
	cin >> n;
	int points[n];

	for (int i = 0; i < n; i++) {
		cin >> temp;
		points[i] = temp;
	}

	int lowest = points[0], highest = points[0];
	for (int i = 1; i < n; i++) {
		if(points[i]>highest){
			highest = points[i];
			result++;
		}
		else if(points[i] < lowest){
			lowest = points[i];
			result++;
		}
		else
			continue;
	}

	cout << result << endl;

	return 0;
}
