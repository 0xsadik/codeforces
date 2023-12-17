#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, m1, m2, fm, mi1, mi2, fmi; cin >> a >> b >> c;
    m1 = max(a , b);
    m2 = max(m1, c);
    fm = max(m1, m2);
    mi1 = min(a, b);
    mi2 = min(mi1, c);
    fmi = min(mi1, mi2);
    cout << fmi << " " << fm << '\n';

    return 0;
}