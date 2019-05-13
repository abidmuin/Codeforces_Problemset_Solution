//https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mat[5][5], x, y, output;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }

    output = abs(3-x) + abs(3-y);
    cout << output << endl;
    return 0;
}
