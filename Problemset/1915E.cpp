#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';

void sol() {
    int n;
    cin >> n;
    vector<ll> s(n + 1);
    set<ll> set{0LL};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s[i + 1] = s[i] + (i % 2 ? 1 : -1) * a;
        set.insert(s[i + 1]);
    }
    if (set.size() != n + 1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        sol();
    }
    
	return 0;
}

