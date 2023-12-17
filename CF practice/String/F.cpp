// way too long words

#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        int len = s.length();
        if (len > 10) {
            cout << s[0] << len - 2 << s[len - 1] << sesh;
        }
        else {
            cout << s << sesh;
        }
    }
    return 0;
}
