//https://codeforces.com/problemset/problem/110/A

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int _count=0;

    for(unsigned int i=0; i<s.length(); i++){
        if(s[i]=='4' || s[i]=='7')
            _count++;
        else
            continue;
    }

    if(_count==4 || _count==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
