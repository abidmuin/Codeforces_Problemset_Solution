//https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n=0, t=0;   //n=no of students, t=time (in seconds)
    cin >> n >> t;
    string str;
    cin >> str;

    for(int i=0; i<t; i++){
        for(int j=1; j<n; j++){
            if(str[j-1]=='B' && str[j]=='G'){
                swap(str[j-1], str[j]);
                j++;
            }
        }

    }

    cout << str << endl;
    return 0;
}
