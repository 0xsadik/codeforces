#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> vis;
	int mx = -1e9;
	for(int i = 0; i < n; ++i) cin >> a[i], vis[a[i]] = 1, mx = max(a[i], mx);
	int g = 0;
	for(int i = 0; i < n; ++i){
		g = __gcd(mx - a[i], g);
	}
	if(g == 0){
		cout << 1 << endl;
		return;
	}
	long long res = 0;
	for(int i = 0; i < n; ++i) res += (mx - a[i]) / g;
	for(int i = mx; vis[i - g]; i -= g) ++res;
	cout << ++res << endl;
}

int main(){
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}