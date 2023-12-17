// Range sum 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--) {
//         int l, r;
//         cin >> l >> r;

//         int sum = 0;
//         for (int i = l; i <= r; i++) {
//             sum += i;
//         }
//         cout << sum << '\n';
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long l, r, m, mi, ans1, ans2;
        cin >> l >> r;

        m = max(l, r);
        mi = min(l, r);
        mi--;
        ans1 = mi * (mi + 1) / 2;
        ans2 = m * (m + 1) / 2;

        cout << ans2 - ans1 << '\n';
    }

    return 0;
}