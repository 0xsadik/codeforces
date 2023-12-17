// Break Number 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; 
//     cin >> n;

//     int mf = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         int f = 0;
//         while(x % 2 == 0) {
//             x /= 2;
//             f++;
//         }
//         mf = max(mf, f);
//     }
//     cout << mf << '\n';

//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int t, result = 0; 
    cin >> t;

    while(t--) {
        int count = 0;
        long long n;
        cin >> n;
        if (n % 2 != 0) {
            count = 0;
        }
        else {
            while(n > 0) {
                if (n % 2 != 0) {
                    break;
                }
                else {
                    count++;
                    n /= 2;
                }
            }
        }
        if (count > result) {
            result = count;
        }
    }
    cout << result << '\n';
    return 0;
}