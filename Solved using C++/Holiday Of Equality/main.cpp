//https://codeforces.com/problemset/problem/758/A
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0, S=0;
    cin >> n;

    vector <int> burles;
    for(int i=0; i<n; i++){
        int b=0;
        cin >> b;
        burles.push_back(b);
    }

    sort(burles.begin(), burles.end());

    for(int i=0; i<burles.size(); i++){
        int temp = 0;
        temp = burles.at(burles.size()-1) - burles.at(i);
        S = S + temp;
    }

    cout << S << endl;
    return 0;
}
