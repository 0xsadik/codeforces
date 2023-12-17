// Dalton the Teacher 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> positions(n);
        for (int i = 0; i < n; i++) {
            cin >> positions[i];
        }
        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (positions[i] != i + 1) {
                moves++;
            }
        }
        cout << moves / 2 << '\n';
    }
    return 0;
}