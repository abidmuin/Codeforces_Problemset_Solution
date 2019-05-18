//https://codeforces.com/problemset/problem/935/A

#include <iostream>

using namespace std;

int main()
{
    int n=0, l=0, ways=0, employee=0;   //n=employee, l=leader, ways=answer(by default=1 since n=2)
    cin >> n;

    for(int i=1; i<=n; i++){
        l=i;
        employee=(n-l);
        if(l==1)
            ways++;
        else if(employee%l==0 && l!=n)
            ways++;
    }

    cout << ways << endl;
    return 0;
}
