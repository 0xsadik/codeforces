#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';

void sol() {
    char ans = 'A' ^ 'B' ^ 'C' ^ '?';
    for (int i = 0; i < 9; i++) {
        char c;
        cin >> c;
        ans ^= c;
    }
    cout << ans << '\n';
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        sol();
    }
    
	return 0;
}
