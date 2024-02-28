// Problem: C. Turtle Fingers: Count the Values of k
// Contest: Codeforces - Codeforces Round 929 (Div. 3)
// URL: https://codeforces.com/contest/1933/problem/C
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// By: Sakura Yamauchi
// When: 2024-02-27 17:10:18
// Topic: 
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
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
ll power(ll a, ll b){
	if (!b) return 1;
	ll mul = a;
	while(--b) mul *= a;
	return mul;
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll a, b, k, tmp; 
    cin >> a >> b >> k;
    
    unordered_set<int> ste;
    forn(i, 0, 21){
    	forn(j, 0, 21){
    		if (power(b, j) > k) break;
    		ll mul = power(a, i) * power(b, j);
    		// cout << mul << ' ';
    		if (!(k%mul)) ste.insert(k/mul);
    	}
    	if (power(a, i) > k) break;
    }
    // cout << '\n';
    // for (auto x : ste) cout << x << '\n'; 
    // cout << "## " << ste.size();
    // cout << endl;
    cout << ste.size();
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}