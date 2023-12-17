// Ali baba and puzzels 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     long long d;
//     cin >> a >> b >> c >> d;
//     if (a - b + c == d) {
//         cout << "YES\n";
//     }
//     else if (a - b * c == d){
//         cout << "YES\n";
//     }
//     else if (a + b - c == d) {
//         cout << "YES\n";
//     }
//     else if (a + b * c == d ) {
//         cout << "YES\n";
//     }
//     else if (a * b - c ) {
//         cout << "YES\n";
//     }
//     else if (a * b + c ) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long a, b, c, d, s1, s2, s3, s4, s5, s6;
//     cin >> a >> b >> c;

//     s1 = a - b * c;
//     s2 = a * b - c;
//     s3 = a + b * c;
//     s4 = a * b + c;
//     s5 = a - b + c;
//     s6 = a + b - c;


//     if (s1 == d || s2 == d || s3 == d || s4 == d || s5 == d || s6 == d) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }

//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long a, b, c, d, s1, s2, s3, s4, s5, s6;
//     cin >> a >> b >> c;

//     s1 = a + b - c;
//     s2 = a + (b * c);
//     s3 = a - b + c;
//     s4 = a - ( b * c);
//     s5 = (a * b) + c;
//     s6 = (a * b) - c;

//     if (s1 == d) {
//         cout << "YES\n";
//     }
//     else if (s2 == d) {
//         cout << "YES\n";
//     }
//     else if (s3 == d) {
//         cout << "YES\n";
//     }
//     else if (s4 == d) {
//         cout << "YES\n";
//     }
//     else if (s5 == d) {
//         cout << "YES\n";
//     }
//     else if (s6 == d) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }
//     return 0;
// }



#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int s1, s2, s3, s4, s5, s6, s7, s8, s9;
    s1 = a + b + c;
    s2 = a + b - c;
    s3 = a - b + c;
    s4 = a - b - c;
    s6 = a * b / c;
    s7 = a / b * c;
    s8 = a / b / c;
    s9 = a + b * c;
    if (s1 == d || s2 == d || s3 == d || s4 == d || s5 == d || s6 == d || s7 == d || s8 == d || s9 == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
