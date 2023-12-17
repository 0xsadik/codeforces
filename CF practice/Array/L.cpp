
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cout << arr[i] << ' ';
        }
        int i = 0;
        int j = 0;
        int m;
        while(true) {
            if (j == n - 1) {
                break;
            }
            if (i == j) {
                m = max(arr[i], arr[i + 1]);
            }
            else {
                m = max(m, arr[i + 1]);
            }
            cout << m << ' ';
            i++;
            if (i == n - 1) {
                j++;
                i = j;
            }
        }
        cout << '\n';
    }
    return 0;
}