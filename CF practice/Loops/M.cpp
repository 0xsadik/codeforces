#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool v =false;
    for (int i = n; i <= m; i++) {
        int a = i;
        bool flag = false;
        while(a > 0) {
            int x = a % 10;
            if (x != 7 && x != 4) {
                flag = true;
            }
            a /= 10;
        }
        if (!flag) {
            cout << i << ' ';
            v = true;
        }
    }
    if (!v) cout << -1; 
    
    return 0;
}