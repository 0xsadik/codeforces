
// sum digits

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string value;
    cin >> value;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += value[i] - '0';
    }
    cout << sum << '\n';
}