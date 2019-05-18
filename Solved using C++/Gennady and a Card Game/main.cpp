//https://codeforces.com/problemset/problem/1097/A

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string table, hand;
    getline(cin, table);    //takes string input with spaces
    getline(cin, hand);
    bool flag=false;

    for(unsigned int i=0; table[i]!='\0'; i++)
        for(unsigned int k=0; hand[k]!='\0'; k++)
            if(hand[k]==table[i]){
                flag = true;
                break;
            }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
