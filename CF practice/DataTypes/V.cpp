
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (a > b)
    {
        if (s == '>')
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    else if (a < b)
    {
        if (s == '<')
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    else {
        cout << "Right\n";
    }

    return 0;
}