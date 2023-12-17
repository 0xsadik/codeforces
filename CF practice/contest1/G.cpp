
// katryoshka 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k, ans = 0;
    cin >> n >> m >> k;

    long long mn = min({n, m, k});
    ans += mn;
    n = n - mn;
    m = m - mn;
    k = k - mn;
    mn = min(n / 2, k);
    ans += mn;
    cout << ans << '\n';

    return 0;
}