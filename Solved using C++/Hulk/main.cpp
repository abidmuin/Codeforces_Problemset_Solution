//https://codeforces.com/problemset/problem/705/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    string str, str1="I hate ", str2="I love ", str3="that ", str4="it ";

    for (int i=1; i<=n; i++){
        //Position checking
        if(i%2!=0)
            str.append(str1);
        else if(i%2==0)
            str.append(str2);
        //Last word checking
        if(i==n)
            str.append(str4);
        else
            str.append(str3);
    }
    cout << str << endl;
    return 0;
}
