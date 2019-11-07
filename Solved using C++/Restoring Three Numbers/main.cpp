//https://codeforces.com/problemset/problem/1154/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[4];
    for(int i=0; i<4; i++){
        cin >> x[i];
    }

    int n = sizeof(x)/sizeof(x[0]);
    sort(x, x+n);

    cout << x[3]-x[0] << " " << x[3]-x[1] << " " << x[3]-x[2] << endl;
    return 0;
}
