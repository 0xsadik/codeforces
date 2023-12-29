#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';


void sol() {
    int n;
    cin >> n;
    long double res = 0;
    for (int i = 0; i < n; i++) {
        long double p;
        cin >> p;
        res += p / 100;
    }
    cout << res * 100 / n << sesh;
}

int main() {

    sol();

	return 0;
}