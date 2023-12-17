// #include<iostream>
// using namespace std;

// int main()
// {
//     char x; cin >> x;
//     char ans = 0;
//     if (x >= 97 && x <= 122) {
//         ans = x - 32;
//         cout << ans << '\n';
//     }
//     else {
//         ans = x + 32;
//         cout << ans << '\n';
//     }

//     return 0;
// }


// -- trying to make it a bit short 

#include<iostream>
using namespace std;

int main()
{
    char x; cin >> x;
    if (x >= 97 && x <= 122) x -= 32;
    else x += 32;

    cout << x << '\n';
    return 0;
}