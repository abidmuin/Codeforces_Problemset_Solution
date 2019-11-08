//https://codeforces.com/problemset/problem/1220/A
#include <iostream>

using namespace std;

int main()
{
    int n=0;    //length of the string
    cin >> n;

    char str[n];
    for(int i=0; i<n; i++)
        cin >> str[i];

    int zero_count=0, one_count=0;
    for(int i=0; i<n; i++){
        if(str[i]=='z')
            zero_count++;
        else
            continue;
    }

    one_count = (n - (zero_count*4)) / 3;

    if(one_count > 0){
        for(int i=0; i<one_count; i++)
            cout << "1 ";
    }

    if(zero_count > 0){
        for(int i=0; i<zero_count; i++)
            cout << "0 ";
    }

    return 0;
}
