//https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <algorithm>
#include <valarray>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int in[n]={0}, out[n]={0};

    for(int i=0; i<n; i++){
        cin >> in[i];
    }
    sort(in, in+n);
    reverse(in, in+n);

    for(int j=0; j<n; j++){
        out[j] = out[j]+in[j];
        int twins_total=0, my_total=0;

        for(int k=j+1; k<n; k++)  //total value of twin's coins
            twins_total=twins_total+in[k];

        for(int l=0; l<n; l++)  //total value of my coins
            my_total = my_total+out[l];

        if(my_total>twins_total){
            cout << (j+1) << endl;
            break;
        }
    }

    return 0;
}
