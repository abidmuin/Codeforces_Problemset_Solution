//https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int index=0, orgLen=str.length();    //initial length of input string
    sort(str.begin(), str.end());

    for(int i=0; i<str.length(); i++){
        if(str[i]=='+')
            index++;
    }

    str.erase(0,index);

    for(int j=0; j<orgLen; j++){
        if(str[j]=='1' || str[j]=='2' || str[j]=='3'){
            if(j+1==orgLen)
                break;
            else
                str.insert((j+1), "+");
        }
    }
    cout << str << endl;
    return 0;
}
