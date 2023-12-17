#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, result = 0, flag = 1, min;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                result = (arr[i - 1] + arr[j - 1]) + (j - i);
                if (flag == 0 && min > result) {
                    min = result;
                }
                if (flag) {
                    min = result;
                    flag = 0;
                }
                result = 0;
            }
        }
        flag = 1;
        cout << min << '\n';
    }
    return 0;
}