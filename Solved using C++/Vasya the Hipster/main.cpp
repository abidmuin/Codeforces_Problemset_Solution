//https://codeforces.com/problemset/problem/581/A
#include <iostream>

using namespace std;

int main()
{
    int red=0, blue=0, diffPair=0, samePair=0;

    cin >> red >> blue;

    if(red >= blue){
        diffPair = blue;
        samePair = (red - diffPair)/2;
    }

    else if(blue > red){
        diffPair = red;
        samePair = (blue - diffPair)/2;
    }

    cout << diffPair << " " << samePair << endl;
    return 0;
}
