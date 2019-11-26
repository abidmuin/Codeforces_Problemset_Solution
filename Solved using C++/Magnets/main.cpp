//https://codeforces.com/problemset/problem/344/A
#include <iostream>

using namespace std;

int main()
{
    int n=0;    //No of Magnets
    cin >> n;

    string PlusMinus = "01", MinusPlus = "10";
    string input[n];
    int group=1;

    for(int i=0; i<n; i++)
        cin >> input[i];

    for(int i=1; i<n; i++){
        if((input[i]==MinusPlus && input[i-1]==MinusPlus) ||
           (input[i]==PlusMinus && input[i-1]==PlusMinus))
            continue;
        else if((input[i]==MinusPlus && input[i-1]==PlusMinus) ||
                (input[i]==PlusMinus && input[i-1]==MinusPlus))
                    group++;
    }

    cout << group << endl;
    return 0;
}
