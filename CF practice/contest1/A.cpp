

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, p, originalPrice;
    cin >> x >> p;

    originalPrice = p / ( 1 - x / 100);
    cout << fixed << setprecision(2) << originalPrice << '\n';

    return 0;
}