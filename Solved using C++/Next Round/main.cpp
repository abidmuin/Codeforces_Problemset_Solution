#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt=0;
    vector<int>a;

    //cout << "Enter n and k: ";
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int score;
        cin >> score;
        a.push_back(score);
    }

    sort(a.begin(), a.end());
//    cout << "Sorted Vector:";
//    for(int i=0; i<n; i++){
//        cout << a[i] << " ";
//    }
//    cout << endl;

    reverse(a.begin(), a.end());
//    cout << "Reversed Vector:";
//    for(int i=0; i<n; i++){
//        cout << a[i] << " ";
//    }
//    cout << endl;


    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]!=0){
            cnt++;
            continue;
        }
        else
            break;
    }

    cout << cnt << endl;

    return 0;
}
