//https://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    int n=0;    //No. of friends
    cin >> n;
    int friends[n], serial[n];
    map <int,int> presents;

    for(int i=1; i<=n; i++){
        cin >> friends[i];
        serial[n] = i;
        presents.insert(pair<int, int> (friends[i],i));
    }

    map<int,int>::iterator itr;
    for(itr=presents.begin(); itr!=presents.end(); itr++){
        cout << itr->second << " ";
    }

    return 0;
}
