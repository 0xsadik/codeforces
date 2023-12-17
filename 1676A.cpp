#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        int first = n[0] + n[1] + n[2];
        int last = n[3] + n[4] + n[5];
        (first == last) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}