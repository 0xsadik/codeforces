#include<bits/stdc++.h>
using namespace std;

void sol() {
    int t, max, a, b, a1, b1;
    cin >> t >> a1 >> b1;
    max = b1;
    t = t - 1;
    while(t--) {
        cin >> a >> b;
        if (b1 - a + b > max) {
            max = b1 - a + b;
        }
        b1 = b1 - a + b;
    }
    cout << max << '\n';
}

int main()
{

    sol();

    return 0;
}