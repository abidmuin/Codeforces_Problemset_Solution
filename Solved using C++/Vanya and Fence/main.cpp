//https://codeforces.com/problemset/problem/677/A
#include <iostream>

using namespace std;

int main()
{
    int n=0, h=0;   //n=No of friends, h=height of fence
    cin >> n >> h;

    int height[n], width=n;

    for(int i=0; i<n; i++)
        cin >> height[i];

    for(int k=0; k<n; k++){
        if(height[k] > h)
            width++;
    }

    cout << width << endl;
    return 0;
}
