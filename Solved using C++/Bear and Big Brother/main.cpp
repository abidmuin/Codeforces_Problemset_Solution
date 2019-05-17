//https://codeforces.com/problemset/problem/791/A

#include <iostream>

using namespace std;

int main()
{
    int limak=0, bob=0;     //weight
    cin >> limak >> bob;
    int year=0;
    while(true){
        if(limak > bob){
            cout << year << endl;
            return 0;
        }
        else{
            limak = limak*3;
            bob = bob*2;
            year++;
        }
    }
    return 0;
}
