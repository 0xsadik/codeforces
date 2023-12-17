#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    int p1, p2;
    cin >> a >> b >> c >> d;
    ( b * log(a) > d * log(c) ) ? cout << "YES" : cout << "NO";

    return 0;
}