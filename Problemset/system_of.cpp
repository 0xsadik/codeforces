// system of equations 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, pair = 0;
    cin >> n >> m;
    int sum = n + m;

    for (int i = 0; i < sum; i++) {
        for (int j = 0; j < sum; j++) {
            int e1 = pow(i, 2) + j; 
            int e2 = pow(j, 2) + i; 
            if (e1 == n && e2 == m) {
                pair++;
            }
        }
    }
    cout << pair << '\n';
    return 0;
}

