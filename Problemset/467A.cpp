// George and Accommodation 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rooms = 0;
    while(n--) {
        int pi, qi, sum;
        cin >> pi >> qi;
        sum = qi - pi;
        if (sum >= 2) {
            rooms++;
        }
    }
    cout << rooms << '\n';

    return 0;
}