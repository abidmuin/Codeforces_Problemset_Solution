//https://codeforces.com/problemset/problem/467/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int living[n]={0}, free[n]={0}, _count=0;

    for(int i=0; i<n; i++){
        cin >> living[i] >> free[i];
        if((free[i]-living[i]) >= 2)
            _count++;
    }
    cout << _count << endl;
    return 0;
}
