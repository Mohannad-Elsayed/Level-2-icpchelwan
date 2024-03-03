// Problem: O - Alternating Current
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/O
// When: 2024-03-02 19:55:21

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    string s; cin >> s;
    int n = s.size();
    
    stack<char> stk;
    forn(i, 0, n){
    	if (stk.empty()){
    		stk.push(s[i]);
    	}
    	else{
    		if (stk.top() == s[i]) stk.pop();
    		else stk.push(s[i]);
    	}
    }
    cout << (stk.empty() ? "Yes" : "No");
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}