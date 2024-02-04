#include <bits/stdc++.h>
using namespace std;

int main() { 
	int tt; cin >> tt;
	while(tt--){
		
		int n, i; cin >> n;
		string s; cin >> s;
		int res = 0, cnt = 0;
		for (i = 0; i<s.length(); ++i){
			if (i == 0 && s[i] == 'P'){
				for (;i<s.length();++i){
					if (s[i] == 'A')break;
				}
			}
			if (s[i] == 'A'){
				i+=1;
				for (;i<s.length();++i){
					if (s[i] == 'P') ++cnt;
					else {--i; break;}
				}
			}
			if (res < cnt) res = cnt;
			cnt = 0;
		}
		cout << res;
		cout << '\n';
	}
	
	return 0;
}
