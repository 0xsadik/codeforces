
// count sub arrays
 
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
        int result = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        result = n;
        int i = 0;
        int j = 0;
        while(true) {
            if (j == n - 1) {
                break;
            }
            if (arr[i] > arr[i + 1]) {
                j++;
                i = j;
                continue;
            }
            result++;
            i++;
            if (i == n - 1) {
                j++;
                i = j;
            }
        }
        cout << result << '\n';
    }
    return 0;
}