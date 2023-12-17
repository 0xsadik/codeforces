// Lucky array

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
    int min = arr[0];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (min == arr[i]) {
            cnt++;
        }
        if (min > arr[i]) {
            min = arr[i];
            cnt = 1;
        }
    }
    if (cnt % 2 == 0) {
        cout << "Unlucky\n";
    }
    else {
        cout << "Lucky\n";
    }
    return 0;
}