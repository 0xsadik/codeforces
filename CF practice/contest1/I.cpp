// Lucky number 

#include<iostream>
using namespace std;

int main()
{
    int n, td, ud;
    cin >> n;

    td = n / 10;
    ud = n % 10;
    if (ud == 0) {
        cout << "YES\n";
        return 0;
    }

    (td % ud == 0 || ud % td == 0) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}