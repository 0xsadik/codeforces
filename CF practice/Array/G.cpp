// palindrome array

#include<iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i <= n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            flag = 1;
            break;
        }
    }
    (flag == 0) ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}