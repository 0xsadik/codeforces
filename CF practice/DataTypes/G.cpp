// #include<iostream>
// using namespace std;

// int main()
// {
//     int flag = 0, n; cin >> n;
//     for(int i = 0; i <= n; i++) {
//         flag += i;
//     }
//     cout << flag << '\n';
// }



#include<iostream>
using namespace std;

int main()
{
    long long n, sum; cin >> n;
    sum = n * (n + 1) / 2;
    cout << sum << '\n';

    return 0;
}