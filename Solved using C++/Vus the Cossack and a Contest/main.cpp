//https://codeforces.com/problemset/problem/1186/A
#include <iostream>

using namespace std;

int main()
{
    int people=0, pens=0, notebooks=0;
    cin >> people >> pens >> notebooks;

    if(pens>=people && notebooks>=people)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
