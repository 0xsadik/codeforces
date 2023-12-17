// Next Round 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int scr[n];

    for (int i = 0; i < n; i++) {
        cin >> scr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (scr[i] >= scr[k-1] && scr[i] > 0) {
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}