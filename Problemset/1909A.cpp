#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';
using ll = long long;

int sgn(int x) {
    return x < 0 ? -1 : x > 0 ? +1 : 0;
}

void sol()
{
    int n;
    cin >> n;
    set<int> X, Y;
    for (int i = 1; i <= n; i++) {
        int x, y; 
        cin >> x >> y;
        X.insert(sgn(x));
        Y.insert(sgn(y));
    }
    X.erase(0);
    Y.erase(0);
    if (X.size() == 2 and Y.size() == 2) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
