//https://codeforces.com/problemset/problem/1328/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int test_cases = 0;
    cin >> test_cases;

    vector<int> answer;
    vector<int>::iterator itr;

    while(test_cases--) {
        int dividend=0, divisor=0, output=0;
        cin >> dividend >> divisor;

        if(dividend%divisor==0)
            answer.push_back(0);
        else {
            output = divisor - (dividend%divisor);
            answer.push_back(output);
        }
    }

    for(itr=answer.begin(); itr!=answer.end(); itr++)
        cout << *itr << endl;

    return 0;
}
