// next alphabet 

#include<iostream>
using namespace std;

int main()
{
    char s;
    cin >> s;

    if (s >= 'a' && s <= 'z') {
        s = (s == 'z') ? 'a' : s + 1;
        cout << s << '\n';
    }

    return 0;
}