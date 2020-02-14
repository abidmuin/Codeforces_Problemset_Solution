//https://codeforces.com/problemset/problem/703/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=0, M=0, C=0;
    cin >> n;

    vector <int> Mishka;
    vector <int> Chris;

    for(int i=0; i<n; i++){
        int m=0, c=0;
        cin >> m >> c;
        Mishka.push_back(m);
        Chris.push_back(c);
    }

//    for(int i=0; i<n; i++){
//        cout << Mishka.at(i);
//        cout << Chris.at(i);
//    }

    for(int j=0; j<n; j++){
        if(Mishka.at(j) > Chris.at(j))
            M++;
        else if(Mishka.at(j) < Chris.at(j))
            C++;
        else
            continue;
    }

    if(M > C)
        cout << "Mishka" << endl;
    else if(C > M)
        cout << "Chris" << endl;
    else if(M == C)
    cout << "Friendship is magic!^^" << endl;

    return 0;
}
