//https://codeforces.com/problemset/problem/131/A
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag=false;
    unsigned int _count=0;

    //Only one letter & Uppercase or lowercase
    if((isupper(s[0]) || islower(s[0])) && s.length()==1)
    {
        if(isupper(s[0]))
            cout << char(tolower(s[0]))<< endl;
        else
            cout << char(toupper(s[0])) << endl;
        return 0;
    }

    //Checking All Caps
    for(unsigned int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
            _count++;
        else
        {
            _count=0;
            break;
        }
    }

    //Checking _count value
    if(_count==s.length())
    {
        for(unsigned int l=0; l<s.length(); l++)
        {
            s[l]=tolower(s[l]);
        }
        cout << s << endl;
        return 0;
    }
    else
    {
        flag=false;
        _count=0;
    }

    //Checking if Caps is pressed
    if(islower(s[0]))
    {
        _count++;
        for(int unsigned k=1; k<s.length(); k++)
        {
            if(isupper(s[k]))
                _count++;
            else
                break;
        }
    }
    else
    {
        _count=0;
        flag=false;
    }

    //Checking _count value
    if(_count==s.length())
    {
        flag=true;
        goto print;
    }
    else
        flag=false;

print:
    if(flag)
    {
        for(unsigned int i=0; i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
            s[0] = toupper(s[0]);
        }
        cout << s << endl;
    }
    else
        cout << s << endl;

    return 0;
}
//Corner case: cAPSlOCK => cAPSlOCK
//OOPS => oops (All caps => All lower)
//A => a
//a => A
