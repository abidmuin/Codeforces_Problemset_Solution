//https://codeforces.com/problemset/problem/996/A
#include <iostream>

using namespace std;

int main()
{
    int n=0, _count=0;
    cin >> n;
    //cout << n << endl;

    if(n>=100){
        int x=0;
        x=n/100;
        _count=x+_count;
        n=n-(x*100);
    }
//    cout << "count " << _count << endl;
//    cout << n << endl;

    if(n>=20){
        int x=0;
        x=n/20;
        _count=x+_count;
        n=n-(x*20);
    }
//    cout << "count " << _count << endl;
//    cout << n << endl;

    if(n>=10){
        int x=0;
        x=n/10;
        _count=x+_count;
        n=n-(x*10);
    }
//    cout << "count " << _count << endl;
//    cout << n << endl;

    if(n>=5){
        int x=0;
        x=n/5;
        _count=x+_count;
        n=n-(x*5);
    }
//    cout << "count " << _count << endl;
//    cout << n << endl;

    if(n>=1){
        int x=0;
        x=n/1;
        _count=x+_count;
        n=n-(x*1);
    }
    cout << _count << endl;
//    cout << n << endl;

    return 0;
}
