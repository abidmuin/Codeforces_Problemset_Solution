//https://codeforces.com/problemset/problem/479/A

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int in[3]={0};
    int _case[6];

    for(int i=0; i<3; i++){
        cin >> in[i];
    }

    _case[0] = in[0]+in[1]+in[2];
    _case[1] = in[0]*in[1]*in[2];
    _case[2] = (in[0]+in[1])*in[2];
    _case[3] = in[0]+(in[1]*in[2]);
    _case[4] = (in[0]*in[1])+in[2];
    _case[5] = in[0]*(in[1]+in[2]);

    sort(_case, _case+6);

    cout << _case[5] << endl;

    return 0;
}
