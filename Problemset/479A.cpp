#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define n '\n';

int main()
{
    ll a, b, c, ans;
    while(cin >> a >> b >> c) {
        ans=a+b+c;
		ans = max(ans,(a*b*c));
		ans = max(ans,(a+b)*c);
		ans = max(ans,a*(b+c));
		ans = max(ans,a+(b*c));
		ans = max(ans,(a*b)+c);
		cout << ans << n;
    }
    return 0;
}