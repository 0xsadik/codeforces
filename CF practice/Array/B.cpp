
// searching 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    bool match = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << '\n';
            match = true;
            break;
        }
    }
    if (!match) {
        cout << -1 << '\n';
    }
    return 0;
}