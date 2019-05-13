//https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
#include <ctype.h>
#include <cstring>

using namespace std;

int main()
{
    char str1[101], str2[101];
    cin >> str1 >> str2;

    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] = str1[i]+32;
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i] = str2[i]+32;
    }

    int Out=0;
    Out = strcmp(str1, str2);
    cout << Out << endl;

    return 0;
}
