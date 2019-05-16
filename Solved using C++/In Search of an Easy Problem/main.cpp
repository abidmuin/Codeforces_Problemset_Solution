//https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int n=0;    //n= no of people
    cin >> n;
    int opinion[n]={0}, sum=0;

    for(int i=0; i<n; i++)
        cin >> opinion[i];

    valarray<int> Opinion(opinion, n);

    if(Opinion.sum())
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
