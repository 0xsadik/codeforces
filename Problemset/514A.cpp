#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

int main()
{
    string x;
    cin >> x;

    for (auto& digit : x)
    {
        if (digit > '4')
            digit = '9' - digit + '0';
    }

    if (x.front() == '0')
        x.front() = '9';
        cout << x << sesh;
    return 0;
}
