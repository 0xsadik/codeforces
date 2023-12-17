

#include<iostream>
using namespace std;

int main()
{
    int range, num, mx = 0;
    cin >> range;
    for (int i = 1; i <= range; i++) {
        cin >> num;
        if (i == 1) {
            mx = num;
        }
        if (num > mx) {
            mx = num;
        }
    }
    cout << mx << '\n';

    return 0;
}