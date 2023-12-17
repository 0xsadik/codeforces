

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // up
    for (int i = 1; i <= n; i++) {
        for (int space = 0; space < n - i; space++) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * i - 1; star++) {
            cout << '*';
        }
        cout << '\n';
    }
    // down
    for (int i = n; i > 0; i--) {
        for (int space = 0; space < n - i; space++) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * i - 1; star++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}