#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int l;
        l = s.length();
        if(l > 10)
        {
            cout << s[0] << l-2 << s[l-1] << endl;
        }
        else
            cout << s << endl;

    }
}
