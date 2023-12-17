#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a;
    cin >> t;

    while(t--)
    {
        cin >> n;
        map<int, int> M;
        while (n-- and cin >> a)
            M[a]++;
        cout << (M.size() <= 2 and abs(begin(M)-> second - rbegin(M)-> second) <= 1 ? "Yes\n" : "No\n");
    }
    return 0;
}