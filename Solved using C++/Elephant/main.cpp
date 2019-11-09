//https://codeforces.com/problemset/problem/617/A
#include <iostream>

using namespace std;

int main()
{
    int x=0;    //Co-ordinate
    int steps=0;
    cin >> x;

        if(x%5==0)
            steps = x/5;
        else
            steps = (x/5)+1;

    cout << steps << endl;

    return 0;
}
