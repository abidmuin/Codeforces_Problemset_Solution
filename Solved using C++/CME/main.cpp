//https://codeforces.com/problemset/problem/1223/A
#include <iostream>

using namespace std;

int main()
{
    int q=0;    //queries
    cin >> q;

    int test[q];
    int req[q];
    for(int i=0; i<q; i++)
        cin >> test[i];

    for(int k=0; k<q; k++){
        if(test[k] == 2)
            req[k] = 2;

        else if(test[k]%2==0 && test[k]!=2)
            req[k] = 0;

        else if(test[k]%2 != 0)
            req[k] = 1;
    }

    for(int l=0; l<q; l++)
        cout << req[l] << " ";

    return 0;
}
