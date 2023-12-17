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
    int mn = arr[0];
    int mx = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (mn > arr[i]) {
            mn = arr[i];
            minIndex = i;
        }
        if (mx < arr[i]) {
            mx = arr[i];
            maxIndex = i;
        }
    }
    arr[minIndex] = mx;
    arr[maxIndex] = mn;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}