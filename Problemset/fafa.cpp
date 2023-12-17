// fafa and his company

#include<iostream>
using namespace std;

int main()
{
    int n, i, l;
    cin >> n;
    l = 0;
    for (i = 1; i <= n / 2; i++) {
        if ( n % i == 0 ) {
            l++;
        } 
    }
    cout << l << '\n';
    return 0;
}


