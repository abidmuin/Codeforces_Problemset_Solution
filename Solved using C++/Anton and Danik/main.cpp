//https://codeforces.com/problemset/problem/734/A
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int games=0;
    cin >> games;   //No of games played

    string results;
    cin >> results;

    int count_A=0, count_D=0;

    for(int i=0; i<games; i++){
        if(results[i]=='A')
            count_A++;
        else
            count_D++;
    }

    if(count_A > count_D)
        cout << "Anton" << endl;
    else if(count_D > count_A)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
