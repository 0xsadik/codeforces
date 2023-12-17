// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b; char s; cin >> a >> s >> b;
//     if (s == '+') {
//         cout << a + b << '\n';
//     }
//     else if (s == '*') {
//         cout << a * b << '\n';
//     }
//     else if (s == '-') {
//         cout << a - b << '\n';
//     }
//     else {
//         cout << a / b << '\n';
//     }

//     return 0;
// }

// --> shortest 

#include<iostream>
using namespace std;

int main()
{
    int a, b; char s; cin >> a >> s >> b;
    if (s == '+') cout << a + b << '\n';
    else if (s == '*') cout << a * b << '\n';
    else if (s == '-') cout << a - b << '\n';
    else cout << a / b << '\n';

    return 0;
}