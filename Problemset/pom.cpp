// plus or minus 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, sm;
        cin >> a >> b >> c;
        sm = a + b;
        (sm == c) ? cout << "+\n" : cout << "-\n";
    }
    return 0;
}