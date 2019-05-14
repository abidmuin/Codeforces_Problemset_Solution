//https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main()
{
    int k, n, w;    //k=cost of first banana, n=initial $, w=no of banana wants
    cin >> k >> n >> w;
    int total=0;
    for(int i=0; i<=w; i++){
        total=total+(i*k);
    }
    total = total - n;
    if(total<0)
        total=0;
    cout << total << endl;
    return 0;
}
