#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int mx = max(l1, l2);
    int mn = min(r1, r2);
    int mx2 = max(l1, l2);
    
    if (mx > mn) {
        cout << -1;
    }
    else {
        cout << mx2 << ' ' << mn << '\n';
    }

    return 0;
}