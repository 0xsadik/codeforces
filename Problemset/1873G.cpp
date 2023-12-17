// ABBC or BACB

// #include <iostream>

// using namespace std;

// int main() {
//   int t;
//   cin >> t;

//   while (t--) {
//     string s;
//     cin >> s;

//     int n = s.length();
//     int dp[n + 1];

//     for (int i = 0; i <= n; i++) {
//       dp[i] = 0;
//     }

//     for (int i = 0; i < n; i++) {
//       for (int j = i + 1; j <= n; j++) {
//         if (s[i] == 'A' && s[j] == 'B') {
//           dp[j] = max(dp[j], dp[i] + 1);
//         }

//         if (s[i] == 'B' && s[j] == 'A') {
//           dp[j] = max(dp[j], dp[i] + 1);
//         }
//       }
//     }

//     int result = 0;
//     for (int i = 0; i <= n; i++) {
//       result = max(result, dp[i]);
//     }

//     cout << result << endl;
//   }

//   return 0;
// }
