// pyramid 

#include<iostream>
using namespace std;

int main()
{
    int n, i, star;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (star = 1; star <= i; star++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    return 0;
}