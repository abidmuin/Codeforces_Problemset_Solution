//https://codeforces.com/problemset/problem/96/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count_1 = 0, count_0 = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='0'){
            if(count_1>0 && count_1<7){
                count_1 = 0;
            }
            count_0++;
        }
        if(str[i]=='1'){
            if(count_0>0 && count_0<7){
                count_0 = 0;
            }
            count_1++;
        }
    }
    if(count_0>=7 || count_1>=7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
