#include <bits/stdc++.h>
using namespace std;

int main() { 
	int tt; cin >> tt; 
	while(tt--){
		string s; getline(cin >> ws, s);
		// convert to 26 based array
		for (int i = 0; i<s.length(); ++i) s[i] -= 'a';
		int operations; cin >> operations;
		int operr[operations+5]{};
		for (int i = 1; i<=operations; ++i){
			int temp; char operand;
			scanf("%d %c", &temp, &operand);
			if (operand == '-') temp *= -1;
			operr[i] = temp;
		}
		int q, tq; cin >> q; tq = q;
		int qerr[q+3]{};
		while(q--){
			int l, r; cin >> l >> r;
			qerr[l] += 1; qerr[r+1] -= 1;
		}
		int pfx[tq+3]{}; pfx[1] = qerr[1];
		for (int i = 2; i<=tq; ++i) pfx[i] = pfx[i-1]+qerr[i];
		for (int i = 1; i<=tq; ++i){
			if (operr[i] > 0){
				s[operr[i]-1] += pfx[i];
				s[operr[i]-1] %= 26; 
			}
			else if (operr[i] < 0){
				s[-operr[i]-1] -= pfx[i];
				s[-operr[i]-1] %= 26; 
				s[-operr[i]-1] += 26;
				s[-operr[i]-1] %= 26;
			}
		}
		for (int i = 0; i<s.length(); ++i) cout << (char)(s[i]+'a');
		cout << '\n';
		// cout << s;
	}
	return 0;
}
