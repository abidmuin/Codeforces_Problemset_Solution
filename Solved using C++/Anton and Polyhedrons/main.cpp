//https://codeforces.com/problemset/problem/785/A

#include <iostream>

using namespace std;

int main()
{
    int n=0, total=0;
    cin >> n;

    string tetra="Tetrahedron", cube="Cube", octa="Octahedron", dodeca="Dodecahedron", icosa="Icosahedron";

    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str==tetra)
            total = total+4;
        else if(str==cube)
            total = total+6;
        else if(str==octa)
            total = total+8;
        else if(str==dodeca)
            total = total+12;
        else if(str==icosa)
            total = total+20;
    }

    cout << total << endl;

    return 0;
}
