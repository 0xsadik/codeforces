// Easy Fibonacci

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    int farr[n];
    farr[0] = 0;
    farr[1] = 1;

    for (int i = 2; i < n; i++) {
        farr[i] = farr[i - 1] + farr[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << farr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
