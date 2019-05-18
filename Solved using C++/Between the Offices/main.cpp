//https://codeforces.com/problemset/problem/867/A

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n=0, toSunFrancisco=0, toSeattle=0;
    cin >> n;
    char flights[n];

    for(int i=0; i<n; i++)
        cin >> flights[i];

    for(int k=0; k<n; k++){
        if(flights[k]=='S'){
            if(flights[k+1]=='S')
                continue;
            else if(flights[k+1]=='F')
                toSunFrancisco++;
        }
        else if(flights[k]=='F'){
            if(flights[k+1]=='F')
                continue;
            else if(flights[k+1]=='S')
                toSeattle++;
        }
    }

    if(toSunFrancisco > toSeattle)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
