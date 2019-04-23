#include <iostream>

using namespace std;

int main()
{
    int n, cnt=0, result=0;
    cin >> n;
    int team[n][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> team[i][j];
            if(team[i][j]==1)
                cnt++;
            else
                continue;
        }
        if(cnt>=2)
        {
            result++;
            cnt=0;
        }
        else{
            cnt=0;
            continue;
        }

    }

//    cout << "Out:" << endl;
//
//    for(int i=0; i<n; i++){
//        for(int j=0; j<3; j++){
//            cout << team[i][j] << " ";
//        }
//    }
//
//    cout << "Count: " << cnt << endl;
//    cout << "Result: " << result << endl;
    cout << result << endl;

    return 0;
}
