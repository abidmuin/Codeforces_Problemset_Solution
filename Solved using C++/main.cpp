//https://codeforces.com/problemset/problem/268/A

#include <iostream>

using namespace std;

int main() {
    int n=0;
    cin >> n;

    int h[n]= {0}, a[n]= {0};
    for(int i=0; i<n; i++)
        cin >> h[i] >> a[i];

    int no_of_games=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(h[i] == a[j])
                no_of_games++;
        }
    }

    cout << no_of_games << endl;
    return 0;
}
