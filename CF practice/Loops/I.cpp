// palindrome 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, digit;
    cin >> n;

    int revnum = 0;
    int originalnum = n;

    while(n > 0) {
        digit = n % 10;
        revnum = revnum * 10 + digit;
        n = n / 10;
    }

    (originalnum == revnum ) ? cout << revnum << '\n' << "YES\n" : cout << revnum << '\n' << "NO\n";
    
    return 0;
}