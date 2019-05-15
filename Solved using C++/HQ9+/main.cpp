//https://codeforces.com/problemset/problem/133/A

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag=false;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }

    if(!flag)
        cout << "NO" << endl;
    return 0;
}
