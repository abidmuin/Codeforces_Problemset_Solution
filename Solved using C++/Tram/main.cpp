//https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], output[n]={0};

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        if(i==0)
            output[i] = output[0] + (b[i]-a[i]);
        else
            output[i] = output[i-1] + (b[i]-a[i]);
    }
//    cout << endl;
//    for(int k=0; k<n; k++){
//        cout << a[k] << " " << b[k] << endl;
//    }
//    cout << endl;
//
//    for(int k=0; k<n; k++){
//        cout << output[k] << " ";
//    }
//    cout << endl;

    sort(output, output+n);

//    for(int k=0; k<n; k++){
//        cout << output[k] << " ";
//    }
//    cout << endl;

    reverse(output, output+n);

//    for(int k=0; k<n; k++){
//        cout << output[k] << " ";
//    }
//    cout << endl;

    cout << output[0] << endl;
    return 0;
}
