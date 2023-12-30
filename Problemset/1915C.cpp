#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';

void sol() {
    int n;
    cin >> n;
    ll s = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s += a;
    }
    ll res = sqrt(s);
    ( res * res == s) ? cout << "YES\n" : cout << "NO\n";
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        sol();
    }
    
	return 0;
}

