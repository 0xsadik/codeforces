#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') {
            cout << ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            char lower = s[i] - 32;
            cout << lower;
        }
        else {
            char upper = s[i] + 32;
            cout << upper;
        }
    }
    return 0;
}

