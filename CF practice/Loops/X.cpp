// convert to decimal 2 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int n, cal = 0;
        long long sum = 0;
        cin >> n;
        while(n > 0) {
            if (n % 2 == 1) {
                cal++;
            }
            n /= 2;
        }
        for (int i = 0; i < cal; i++) {
            sum += pow(2, i);
        }
        cout << sum << '\n';
    }
    return 0;
}