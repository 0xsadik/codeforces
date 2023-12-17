// Factorial 

#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while(t--) {
        cin >> n;
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << fact << '\n';
    }

    return 0;
}