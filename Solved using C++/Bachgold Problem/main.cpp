//https://codeforces.com/problemset/problem/749/A
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int checkPrime(int);
int main()
{
    int n=0, primeCount=0;
    cin >> n;

    primeCount = n/2;
    cout << primeCount << endl;
    vector <int> sumNumbers;
    //For even number
    if(n%2==0){
        for(int k=0; k<n/2; k++)
            sumNumbers.push_back(2);
    }
    //For odd number
    else{
        for(int l=0; l<(n/2)-1; l++)
            sumNumbers.push_back(2);
        sumNumbers.push_back(3);
    }

    for(vector<int>::iterator it=sumNumbers.begin(); it!=sumNumbers.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}
