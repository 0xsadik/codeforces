#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        if (arr[i] % 2 != 0) {
            cout << 0 << '\n';
            return 0;
        }
        while(arr[i] % 2 == 0 ) {
            cnt++;
            arr[i] /= 2;
        }
        if (i == 0 || cnt < result) {
            result = cnt;
        }
    }
    cout << result << '\n';
    return 0;
}