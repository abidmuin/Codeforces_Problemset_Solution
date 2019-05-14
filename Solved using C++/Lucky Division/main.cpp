//https://codeforces.com/problemset/problem/122/A

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=0, _count=0;
    n = atoi(s.c_str());

    for(int i=0; i<s.length(); i++){
        if(s[i]=='4' || s[i]=='7')
            _count++;
        else
            break;
    }

    if(_count==s.length() || (n%4==0 || n%7==0 || n%47==0 || n%744==0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
