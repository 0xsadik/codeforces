#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string code;
    cin >> code;

    if ((a + b + 1) != code.size()) {
        cout << "No\n";
        return 0;
    }
    if (code[a] != '-') {
        cout << "No\n";
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] >= 48 && code[i] <= 57 && i != a) {
            cnt++;
        }
    }
    if (cnt == a + b) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}