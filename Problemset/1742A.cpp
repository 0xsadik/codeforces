#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

void uttor() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        (a + b == c || a + c == b || b + c == a) ? cout << "YES\n" : cout << "NO\n";
    }
}

int main()
{

    uttor();

    return 0;
}
