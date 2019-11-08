//https://codeforces.com/problemset/problem/200/B
#include <iostream>

using namespace std;

int main()
{
    int n=0;    //No of oranges
    cin >> n;

    double total=0.0, partial=0.0;
    for(int i=0; i<n; i++){
        cin >> partial;
        total = total + partial;
    }
    double percentage=0.0;
    percentage = total / n;

    cout << percentage << endl;
    return 0;
}
