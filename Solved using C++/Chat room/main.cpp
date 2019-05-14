//https://codeforces.com/problemset/problem/58/A
//hehwelloho
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i=0;

    while(s[i]!='h' && i<s.length())
        i++;
    i++;
    while(s[i]!='e' && i<s.length())
        i++;
    i++;
    while(s[i]!='l' && i<s.length())
        i++;
    i++;
    while(s[i]!='l' && i<s.length())
        i++;
    i++;
    while(s[i]!='o' && i<s.length())
        i++;
    i++;

    if(i<=s.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
