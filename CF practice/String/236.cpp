#include<bits/stdc++.h>
using namespace std;
#define sesh '\n';
 
int main()
{
	string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
	(s.length() % 2 == 0) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!" << sesh;
	
    return 0;
}