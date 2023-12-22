#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    char tmp;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        tmp = s[i];
        cnt++;
      }
      else {
        if (s[i] != tmp) {
          cnt++;
          tmp = s[i];
        }
      }
    }
    cout << cnt << '\n';
    return 0;
}
