// Word 

#include<bits/stdc++.h>
using namespace std;
#define n '\n';

int main()
{
    string str;
    cin >> str;

    int lowcnt = 0;
    int uppercnt = 0;
    int len = str.size();

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lowcnt++;
        }
        else {
            uppercnt++;
        }
    }
    for (int i = 0; i < len; i++) {
        if (lowcnt >= uppercnt) {
            char convl = tolower(str[i]);
            cout << convl;
        }
        else {
            char convu = toupper(str[i]);
            cout << convu;
        }
    }

    return 0;
}