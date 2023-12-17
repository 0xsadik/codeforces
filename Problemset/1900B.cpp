// laura and operations 

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> possibleDigits(int a, int b, int c) {
//     if (a > b + c) {
//         return {1, 0, 0};
//     }
//     else if (b > a + c) {
//         return {0, 1, 0};
//     }
//     else if (c > a + b) {
//         return {0, 0, 1};
//     }
//     else if (a == b + c) {
//         return {1, 1, 0};
//     }
//     else if (b == a + c) {
//         return {0, 1, 1};
//     }
//     else if (c == a + b) {
//         return {1, 0, 1};
//     }
//     else {
//         return {0, 0, 0};
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--) {
//         int a, b, c;
//         cin >> a >> b >> c;
        
//         vector<int> possible = possibleDigits(a, b, c);
//         for (int digit : possible) {
//             cout << digit << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, n1, n2, n3;
        cin >> a >> b >> c;
        if (abs(b - c) % 2 == 0) {
            n1 = 1;
        }
        else {
            n1 = 0;
        }
        if (abs(a - c) % 2 == 0) {
            n2 = 1;
        }
        else {
            n2 = 0;
        }
        if (abs(a - b) % 2 == 0) {
            n2 = 1;
        }
        else {
            n3 = 0;
        }
        cout << n1 << ' ' << n2 << ' ' << n3 << '\n';
    }
    return 0;
}
