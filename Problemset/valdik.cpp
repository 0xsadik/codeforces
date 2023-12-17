// valdik and courtesy 


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int candy = 1;
//     while(true) {
//         if (a < b +  candy) {
//             cout << "Valera\n";
//             break;
//         }
//         else if (a > b) {
//             cout << "Vladik\n";
//             if (a < b + candy) {
//                 cout << "Valera\n";
//             }
//         }
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int candy = 1;
    while(true) {
        if (candy > a) {
            cout << "Vladik";
            return 0;
        }
        else {
            a = a - candy;
            candy++;
        }

        if (candy > b) {
            cout << "Valera\n";
            return 0;
        }
        else {
            b = b - candy;
            candy++;
        }
    }
    return 0;
}




