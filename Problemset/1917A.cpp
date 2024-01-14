#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';
using ll = long long;

void sol()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sgn = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            sgn *= -1;
        }
        else if (a[i] == 0) {
            sgn = 0;
        }
    }
    if (sgn <= 0) {
        cout << 0 << '\n';
        return;
    }
    cout << 1 << '\n';
    cout << 1 << ' ' << 0 << '\n';
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
