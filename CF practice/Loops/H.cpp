// #include<iostream>
// using namespace std;

// void fast() {
//     cin.tie(0);
//     cout.sync_with_stdio(0);
// }
// int main()
// {
//     fast();
//     int n, cnt = 0;
//     cin >> n;
//     for (int i = 1; i <= n/2; i++ ){
//         if (n % i == 0) {
//             cnt++;
//         }
//     }
//     if (cnt == 1) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

void fast() {
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
    fast();
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n/2; i++ ){
        (n % i == 0) ? cnt++ : cnt;
    }
    (cnt == 1) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}

