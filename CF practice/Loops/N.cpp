// Number histogram 

#include<iostream>
using namespace std;

int main()
{
    char s;
    cin >> s;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++ ) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int sign = 0; sign < arr[i]; sign++) {
            cout << s;
        }
        cout << '\n';
    }
}