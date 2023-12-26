#include<bits/stdc++.h>
using namespace std;

void sol() {
    string s,r;
	int counter = 0;
	getline(cin,s);
	for(int i=0;i<s.size();i++) {
		if(s[i] != 32& s[i] != '!' && s[i] != '.' && s[i] != '?' && s[i] != ','){
			r+=s[i];
		}
		if((s[i] == 32 || s[i] == '!' || s[i] == '.' || s[i] =='?' || s[i] == ',' || i == s.size() - 1)
		   && r.size() != 0){
			counter++;
			r = "";
		}
	}
	cout<<counter<<endl;
}

int main() {

    sol();
    return 0;
}