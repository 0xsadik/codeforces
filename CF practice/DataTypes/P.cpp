// #include<iostream>
// using namespace std;

// int main()
// {
//     int num; cin >> num;
//     while(num >= 10) {
//         num /= 10;
//     }
//     if (num % 2 == 0) {
//         cout << "EVEN\n";
//     }
//     else {
//         cout << "ODD\n";
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int num; cin >> num;
    while(num >= 10) num /= 10;
    if (num % 2 == 0) cout << "EVEN\n";
    else  cout << "ODD\n";

    return 0;
}