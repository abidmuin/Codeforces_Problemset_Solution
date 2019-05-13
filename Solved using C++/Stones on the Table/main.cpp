//https://codeforces.com/problemset/problem/266/A

#include <iostream>

using namespace std;

int main()
{
    int n, r=0, g=0, b=0, total=0;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i]=='R' && s[i+1]!='\n'){
            if(s[i+1]=='R')
                r++;
        }
        else if(s[i]=='G' && s[i+1]!='\n'){
            if(s[i+1]=='G')
                r++;
        }
        else if(s[i]=='B' && s[i+1]!='\n'){
            if(s[i+1]=='B')
                r++;
        }
        else
            continue;
    }
    total = r+b+g;
    cout << total << endl;

    return 0;
}
