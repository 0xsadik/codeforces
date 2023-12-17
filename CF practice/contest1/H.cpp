// Data type guessing 

// #include<iostream>
// using namespace std;

// int main()
// {
//     double n, k, a;
//     cin >> n >> k >> a;

//     long long f = (k * a) / a;
//     double q = (k * n) / a, t = q - f;
//     if (t > 0) {
//         cout << "double\n";
//     }
//     else if (q > 2147483647) {
//         cout << "long long\n";
//     }
//     else {
//         cout << "int\n";
//     }

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, a;
    cin >> n >> k >> a;

    long long result = (n * k) / a;
    if (result <= INT_MAX && result >= INT_MIN) {
        cout << "int\n";
    }
    else if (result <= LLONG_MAX && result >= LLONG_MIN) {
        cout << "long long\n";
    }
    else {
        cout << "double\n";
    }

    return 0;
}