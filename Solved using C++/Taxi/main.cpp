//https://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, no3=0, no2=0, no1=0, _count=0;
    cin >> n;
    int s[n]={0};

    //taking inputs
    for(int i=0; i<n; i++)
        cin >> s[i];

    //counting members of different groups
    for(int k=0; k<n; k++){
        if(s[k]==4)
            _count++;
        else if(s[k]==3)
            no3++;
        else if(s[k]==2)
            no2++;
        else if(s[k]==1)
            no1++;
    }

    //cout << "Count:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;
    _count = _count+min(no1, no3);
    //cout << "min(no1&3):" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    //updating no1 & no3 group members
    int minVal = min(no1, no3);
    no1 = no1-minVal;
    no3 = no3-minVal;
    //cout << "no1 & no3 update:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    _count = _count+(no2/2);
    //cout << "no2/2:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    no2 = no2%2;  //remainder of no2 group
    //cout << "no2 rem:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    _count = _count+min(no2, (no1/2));
    //cout << "min(no2, no1/2)" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    //updating no2 & no1
    minVal = min(no2, (no1/2));
    no2 = no2-minVal;
    no1 = no1-(2*minVal);
    //cout << "no1%2 update:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    if(no2==1 && no1>=0){
        _count++;
        no2--;
        no1--;
    }

    //cout << "Count:" << no1 << " " << no2 << " " << no3 << " " << _count << endl;

    //cout << "Ceil: " << ceil(no1/4.0) << endl;
    _count = _count+ceil(no1/4.0);
    _count = _count+no3;

    cout << _count << endl;
    return 0;
}
