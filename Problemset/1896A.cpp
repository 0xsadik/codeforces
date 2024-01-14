#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';
using ll = long long;

void sol() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (a[0] == 1) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
}

int main()
{

    int t;
    cin >> t;
    while(t--) {
        sol();
    }

    return 0;
}
