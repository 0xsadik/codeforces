#include<iostream>
using namespace std;

int main()
{
    long long n, m, first, second; cin >> n >> m;
    first = n % 10;
    second = m % 10;
    cout << first + second << '\n';

    return 0;
}