//https://codeforces.com/problemset/problem/977/A

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int n=0, k=0;   //n=given number, k=no of subtractions
    cin >> n >> k;
    string str;
    str = to_string(n);

    for(unsigned int i=0; i<k; i++){
        if(str[str.length()-1]!='0'){
            n--;
            str = to_string(n);
        }
        else if(str[str.length()-1]=='0'){
            n=n/10;
            str = to_string(n);
        }
    }

    cout << n << endl;

    return 0;
}
