//https://codeforces.com/problemset/problem/236/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int _count=0;

    sort(s.begin(), s.end());

    for(int i=0; i<s.length(); i++){
        if(s[i]!=s[i+1])
            _count++;
        else
            continue;
    }

    if(_count%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
