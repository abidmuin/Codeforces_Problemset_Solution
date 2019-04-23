#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n=0, X=0;
    char add1[3]= {'X', '+', '+'};
    char add2[3]= {'+', '+', 'X'};
    char sub1[3]= {'X', '-', '-'};
    char sub2[3]= {'-', '-', 'X'};

    //cout << "Input: " ;
    cin >> n;
    char str[n][3];

    //cout << "Input str:" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> str[i][j];
        }
    }

//    cout << "Output str:" << endl;
//    for(int i=0; i<n; i++)
//    {
//        for(int k=0; k<3; k++)
//        {
//            cout << str[i][k];
//        }
//        cout << endl;
//    }

    for(int i=0; i<n; i++)
    {
        if((str[i][0]==add1[0] && str[i][1]==add1[1] && str[i][2]==add1[2]) ||
                (str[i][0]==add2[0] && str[i][1]==add1[1] && str[i][2]==add2[2]))
            X=X+1;
        else if((str[i][0]==sub1[0] && str[i][1]==sub1[1] && str[i][2]==sub1[2]) ||
                (str[i][0]==sub2[0] && str[i][1]==sub2[1] && str[i][2]==sub2[2]))
            X=X-1;
    }

    //cout << "Value of X: " << X << endl;
    cout << X << endl;
    return 0;
}
