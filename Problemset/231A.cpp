#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sesh '\n';


void sol() {
    int t, petya, vasya, tonya, number(0);
	cin >> t;
	while(t--) {
		cin >> petya >> vasya >> tonya;
		int sum = petya + vasya + tonya;
		if (sum >= 2) {
			number += 1;
		}
	}
	cout << number << sesh;
}

int main() {

    sol();

	return 0;
}