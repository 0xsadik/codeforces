// Divisibility problem 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, mod;
        cin >> a >> b;
        mod = a % b;
        (mod == 0) ? cout << 0 << '\n' : cout << b - mod << '\n';
    }
    return 0;
}