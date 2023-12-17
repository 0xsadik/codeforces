// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) {
//         int x, y;
//         cin >> x >> y;
//         if (x > y) {
//             int sum = 0;
//             for (int i = y; i < x; i++) {
//                 if (i % 2 != 0) {
//                     sum += i;
//                 }
//             }
//             cout << sum << '\n';
//         }
//         else if (x < y) {
//             int sum = 0;
//             for (int i = x; i < y; i++) {
//                 if (x + 1 == y) {
//                     cout << sum << '\n';
//                 }
//                 if (i % 2 != 0) {
//                     sum += i;
//                 }
//             }
//             cout << sum << '\n';
//         }
//     }
// }


// accepted 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) {
//         int x, y, sum = 0;
//         cin >> x >> y;
        
//         if (x > y) {
//             for (int i = y + 1; i < x; i++) {
//                 if (i % 2 != 0) {
//                     sum += i;
//                 }
//             }
//         }
//         else {
//             for (int i = x + 1; i < y; i++) {
//                 if ( i % 2 != 0) {
//                     sum += i;
//                 }
//             }
//         }
//         cout << sum << '\n';
//     }
//     return 0;
// }




// ---- accepted 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) {
//         int x, y;
//         cin >> x >> y;
        
//         if (x > y) {
//             int swap;
//             swap = x;
//             x = y;
//             y = swap;
//         }
//         int sum = 0;
//         for (int i = x + 1; i < y; i++ ){
//             if (i % 2 != 0) {
//                 sum += i;
//             }
//         }
//         cout << sum << '\n';
//     }
//     return 0;
// }