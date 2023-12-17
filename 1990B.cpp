// laura and 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        int sum1 = (b + c + 1) % 2;
        int sum2 = (a + c + 1) % 2;
        int sum3 = (a + b + 1) % 2;
        cout << sum1 << ' ' << sum2 << ' ' << sum3 << '\n';
    }
    return 0;
}