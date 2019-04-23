#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string istr;
    //getline(cin, istr);
    cin >> istr;
    int istrlength;
    istrlength = istr.size();

    //cout << istr << endl;
    //cout << "Length of istr: " << istrlength << endl;

    for(int i=0; i<istrlength; i++){
        if(istr[i]>='A' && istr[i]<='Z')
            istr[i]=istr[i]+32;
        else
            continue;
    }

    for(int i=0; i<istrlength; i++){
        if(istr[i]=='a'||istr[i]=='e'||istr[i]=='i'||istr[i]=='o'||istr[i]=='u'||istr[i]=='y')
           {
                istr[i]=0;
           }
        else
            continue;
    }

    //cout << "Output: " << endl;
    for(int i=0; i<istrlength; i++){
            if(istr[i]!=0)
                cout << "." << istr[i];
            else
                continue;
    }

    return 0;
}
