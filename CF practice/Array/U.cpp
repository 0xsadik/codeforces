#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long size, seq;
    cin >> size >> seq;
    long long arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int arrs[seq];
    for (int i = 0; i < seq; i++) {
        cin >> arrs[i];
    }

    int tmp = 0;
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == arrs[tmp]) {
            cnt++;
            tmp++;
        }
    }
    (cnt == seq) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}