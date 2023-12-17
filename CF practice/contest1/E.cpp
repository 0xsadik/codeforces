// interval sweep

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int len = b + a + 1;
//     if (len % 2 == 0) {
//         cout << "YES\n";
//         return 0;
//     }

//     if (a % 2 == 0) {
//         if (b % 2 == 0) {
//             cout << "YES\n";
//             return 0;
//         }
//         a++;
//     }
//     cout << "NO\n";

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "NO\n";
    }
    else if (abs(a - b) == 1 || abs(a - b) == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}