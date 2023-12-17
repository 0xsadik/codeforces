#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn, lpos;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mn = arr[0];
    lpos = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
            lpos = i + 1;
        }
    }
    cout << mn << ' ' << lpos << '\n';

    return 0;
}