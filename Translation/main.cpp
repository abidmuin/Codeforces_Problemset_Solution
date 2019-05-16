//https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string in, out;
    cin >> in >> out;

    reverse(in.begin(), in.end());

    if(in==out)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
