//https://codeforces.com/problemset/problem/509/A
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n=0, init=1;
    cin >> n;

    //vector<vector<int> > vector_name(row, vector<int>(col, init_number));
    vector <vector <int> > mat(n, vector<int> (n, 1));

    for(int i=0; i<1; i++){
        for(int j=0; j<n; j++){
            mat.at(i).push_back(init);
        }
    }

//    for(int k=0; k<n; k++){
//        for(int l=0; l<n; l++){
//            cout << mat[k][l] << " ";
//        }
//        cout << endl;
//    }

    for(int s=1; s<n; s++){
        for(int t=1; t<n; t++){
            mat[s][t] = mat[s-1][t] + mat[s][t-1];
        }
    }

//    cout << "Result: " << endl;
//    for(int k=0; k<n; k++){
//        for(int l=0; l<n; l++){
//            cout << mat[k][l] << " ";
//        }
//        cout << endl;
//    }

    int maxNum = INT_MIN;
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            if(mat[x][y] > maxNum)
                maxNum = mat[x][y];
        }
    }

    cout << maxNum << endl;

    return 0;
}

