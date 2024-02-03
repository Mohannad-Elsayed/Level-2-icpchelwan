#include <bits/stdc++.h>
using namespace std;

int main() { 
	// there's a solution without stack
	stack<char> st; string s;
	cin >> s; long long cnt = 0;
	long long max_res = -1;
	for (int i = 0; i < s.length(); ++i){
		if (s[i] == '('){
			st.push(s[i]);
		}
		else{
			if (!st.empty()){
				++cnt;
				st.pop();
				if (st.empty()){
					// cout << "Here\n";
					if (!(i+1 == s.length()) && s[i+1] == ')'){
						if (max_res < cnt) max_res =cnt;
						cnt = 0;
					}
				}
			}
		}
	}
	cout << max(max_res, cnt)*2;
	// cout << max_res;
	return 0;
}
