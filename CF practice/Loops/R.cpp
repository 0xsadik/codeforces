// sequence of numbers and sum 

#include<iostream>
using namespace std;

int main()
{
    while (true) {
        int n, m, sum = 0;
        cin >> n >> m;
        if (n <= 0 || m <= 0){
            break;
        }

        if (n > m) {
            for (int i = m; i <= n; i++) {
                cout << i << ' ';
                sum += i;
            }
        }
        else {
            for (int i = n; i <= m; i++) {
                cout << i << ' ';
                sum += i;
            }
        }
        cout << "sum =" << sum << '\n';
    }
    return 0;
}