#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
