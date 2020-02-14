//https://codeforces.com/problemset/problem/1281/A
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int test=0, len=0;
    cin >> test;

    int str[test];

    for(int i=0; i<test; i++){
        string input;
        cin >> input;

        len = input.size();
        if(input[len-1] == 'o')
            str[i]=1;
        else if(input[len-1] == 'u')
            str[i] = 2;
        else if(input[len-1] == 'a')
            str[i] = 3;
        else
            continue;
    }

    for(int j=0; j<test; j++){
        if(str[j]==1)
            cout << "FILIPINO" << endl;
        else if(str[j]==2)
            cout << "JAPANESE" << endl;
        else if(str[j] ==3)
            cout << "KOREAN" << endl;
    }
    return 0;
}
