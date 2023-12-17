#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, cnt = 0;
    string s;
    cin >> n;   
    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[n - 1]) {
            cnt++;
        }
    }
    
    if (cnt != 1) {
        cout << n - 1;
    }
    else if (n == 4 && s[0] == s[1]) {
        cout << 2;
    }
    else if (s[0] != s[n - 1] && n != 4) {
        cout << 1;
    }
    else {
        cout << -1;
    }
    return 0;
}