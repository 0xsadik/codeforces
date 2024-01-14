#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, ans;
	cin >> n;
	if (n % 2 == 0) {
		ans = n / 2 - 1;
	}
	else {
		ans = (n - 1) / 2;
	}
	cout << ans << '\n';
	return 0;
}