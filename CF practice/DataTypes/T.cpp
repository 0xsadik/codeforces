// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a <= b && a <= c) {
//         if (b <= c) {
//             cout << a << '\n' << b << '\n' << c;
//         }
//         else {
//             cout << a << '\n' << b << c << '\n' << b;
//         }
//     }
//     else if ( b <= a && b <= c) {
//         if ( a <= c ) {
//             cout << b << '\n' << a << '\n' << c;
//         }
//         else {
//             cout <<  b << '\n' << c << '\n' << a;
//         }
//     }
//     else if ( c <= a && c <= b) {
//         if ( a <= b) {
//             cout << c << '\n' << a << '\n' << b;
//         }
//         else {
//             cout << c << '\n' << b << '\n' << a;
//         }
//     }
//     cout << "\n\n" << a << '\n' << b << '\n' << c;

//     return 0;
// }


// #include<algorithm>
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c; cin >> a >> b >> c;
//     int arr[] = {a, b, c};
//     sort(arr, arr + 3);
//     for (int i = 0; i < 3; i++) {
//         cout << arr[i] << '\n';
//     }
//     cout << '\n';    
//     cout << a << '\n' << b << '\n' << c << '\n';
//     return 0;
// }



// accepted

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, tmp, sm, md, mx;
//     cin >> a >> b >> c;

//     if (a > b) {
//         md = a;
//         sm = b;
//     }
//     else {
//         md = b;
//         sm = a;
//     }
//     if (md > c) {
//         mx = md;
//         if ( sm > c) {
//             md = sm;
//             sm = c;
//         }
//         else {
//             md = c;
//         }
//     }
//     else {
//         mx = c;
//     }

//     cout << sm << '\n' << md  << '\n' << mx << '\n';
//     cout << '\n' << a << '\n' << b << '\n'<< c << '\n';

//     return 0;
// }


// accepted 