// Problem: P - Catch Overflow!
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/P
// When: 2024-03-02 20:24:33

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
    int n; cin >> n; llu res = 0;
    stack<ll> stk; stk.push(1);
    forn(i, 0, n){
    	string s; cin >> s;
    	if (s == "add"){
    		res += stk.top();
    		continue;
    	}
    	if (s == "for"){
    		ll n, val1, val2; cin >> n; 
    		val1 = (ll)stk.top() * n;
    		val2 = (ll)UINT_MAX+1;
    		stk.push(min(val1, val2));
    		continue;
    	}
    	if (s == "end"){
    		stk.pop();
    		continue;
    	}
    }
    if (res > UINT_MAX) return (cout << "OVERFLOW!!!"), 0;
    cout << res;
    // cout << endl << UINT_MAX;
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