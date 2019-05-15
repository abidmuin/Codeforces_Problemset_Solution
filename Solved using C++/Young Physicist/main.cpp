//https://codeforces.com/problemset/problem/69/A

#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int in[n][3]={0};
    int x_out[n]={0}, y_out[3]={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++)
            cin >> in[i][j];
    }

    //Checking row wise
    for(int i=0; i<n; i++){
        int x_total=0;
        for(int j=0; j<3; j++){
            x_total = x_total+in[i][j];
        }
        x_out[i]=x_total;
    }

    //cout << "x_total: ";
    int x_total=0;
    for(int k=0; k<n; k++)
        x_total = x_total + x_out[k];
    //cout << x_total << endl;

    //Checking column wise
    for(int i=0; i<3; i++){
        int y_total=0;
        for(int j=0; j<n; j++){
            y_total = y_total+in[j][i];
            //cout << in[j][i] << " ";
        }
        //cout << endl;
        //cout << "y_total at [" << i << "] " << y_total << endl;
        y_out[i]=y_total;
    }
    //cout << endl;

//    for(int k=0; k<3; k++)
//        cout << y_out[k] << " ";
//    cout << endl;

    if((y_out[0]==0 && y_out[1]==0 && y_out[2]==0) ||
       (x_total=0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
