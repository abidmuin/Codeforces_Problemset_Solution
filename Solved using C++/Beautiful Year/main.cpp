//https://codeforces.com/problemset/problem/271/A

#include <iostream>

using namespace std;

int main()
{
    int n=0, n1=0, n2=0, n3=0, n4=0;    //n=year, n1=first digit(from leftside)
    cin >> n;
    while(1){
        n++;
        n1=n/1000;
        n2=(n/100)%10;
        n3=(n/10)%10;
        n4=n%10;

        if(n1!=n2 && n1!=n3 && n1!=n4 && n2!=n3 && n2!=n4 && n3!=n4){
            cout << n << endl;
            return 0;
        }
        else
            continue;
    }
}
