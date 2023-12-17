
// Diverse Team

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     unordered_map<int, int> ra
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> ratingIndices;

    for (int i = 1; i <= n; i++) {
        int rating;
        cin >> rating;
        if (ratingIndices.find(rating) == ratingIndices.end()) {
            ratingIndices[rating] = i;
        }
    }

    if (ratingIndices.size() < k) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
        int count = 0;
        for (auto& pair : ratingIndices) {
            std::cout << pair.second << " ";
            count++;
            if (count == k) {
                break;
            }
        }
        cout << '\n';
    }

    return 0;
}
