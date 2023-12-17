#include<iostream>
using namespace std;

int main()
{
    long long a, b, c, d, an, ans;
    cin >> a >> b >> c >> d;

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    ans = a * b * c * d;
    an = ans % 100;
    if (an < 10) cout << 0 << an;
    else cout << an;

    return 0;
}