#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    char arr[100][101];

    for (int i = 1; i <= row; i++ ) {
        for (int j = 1; j <= col; j++) {
            cin >> arr[i][j];
        }
    }
    int rowin, colin;
    cin >> rowin >> colin;

    (arr[rowin][colin - 1] != '.' && arr[rowin][colin + 1] != '.' && arr[rowin - 1][colin] != '.' && arr[rowin + 1][colin] != '.' && arr[rowin - 1][colin - 1] != '.' && arr[rowin - 1][colin + 1] != '.' && arr[rowin + 1][colin - 1] != '.' && arr[rowin + 1][colin + 1] != '.') ? cout << "yes\n" : cout << "no\n";

    return 0;
}