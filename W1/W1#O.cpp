#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s; cin >> s;
	if (s.length() == 1){
		cout << "No";
		return 0;
	}
	int chngs = 0;
	for (int i = 1; i<s.length(); ++i){
		if (s[i] != s[i-1]) ++chngs;
	}
	
	if (chngs == 0 || (!(chngs%2) && !(s.length()%2)) || ((chngs%2) && (s.length()%2))) cout << "Yes";
	else cout << "No";
	return 0;
}
