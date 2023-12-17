
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long start = 0;
    long long sec = 1;
    if (n == 1) {
        cout << start << '\n';
    }
    else if (n == 2) {
        cout << sec << '\n';
    }
    else {
        for (int i = 3; i <= n; i++) {
            long long res = start + sec;
            start = sec;
            sec = res;
        }
        cout << sec << '\n';
    }
    return 0;
}