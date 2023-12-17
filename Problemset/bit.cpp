// bit++

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int tmp = 0;
    for (int i = 0; i < n; i++) {
        string state;
        cin >> state;
        if (state[0] == '+' || state[1] == '+') {
            tmp++;
        }
        else {
            tmp--;
        }
    }
    cout << tmp << '\n';
    return 0;
}