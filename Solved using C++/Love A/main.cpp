//https://codeforces.com/problemset/problem/1146/A
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int str_len = s.size() ;
    int a_count=0;

    for(int i=0; i<str_len; i++){
        if(s[i] == 'a')
            a_count++;
        else
            continue;
    }

    double half_String = 0.0;
    half_String = ceil(str_len / 2.0);

    if(a_count > half_String)
        cout << str_len << endl;
    else
        cout << (a_count*2 - 1) << endl;

    return 0;
}
