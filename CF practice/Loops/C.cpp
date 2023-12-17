// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, d, t, even= 0, odd = 0, positive = 0, negative = 0;
//     cin >> t;
//     while (t--) {
//         cin >> a >> b >> c >> d;
//         if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0 || d % 2 == 0) {
//             even += 1;
//         }
//         else if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0 || d % 2 != 0) {
//             odd += 1;
//         }
//         else if (a < 0 || b < 0 || c < 0 || d < 0) {
//             negative += 1;
//         }
//         else {
//             positive += 1;
//         }
//     }
// }



#include<iostream>
using namespace std;

int main()
{
    int n, r, e = 0, o= 0, p= 0, ne = 0;
    cin >> r;
    for (int i = 1; i <= r; i++) {
        cin >> n;
        if (n % 2 == 0) {
            e++;
        }
        else {
            o++;
        }
        if (n > 0 ) {
            p++;
        }
        else if (n < 0) {
            ne++;
        }
    }
    cout << "Even: " << e<< '\n';
    cout << "Odd: " << o << '\n';
    cout << "Positive: " << p << '\n';
    cout << "Negative: " << ne << '\n';

    return 0;
}