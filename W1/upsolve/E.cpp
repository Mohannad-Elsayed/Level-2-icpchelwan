// Problem: E - Is Bitmask !?
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/E
// Memory Limit: 256 MB
// Time Limit: 250 ms
// By: Sakura Yamauchi
// When: 2024-02-28 06:06:24
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
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n; cin >> n;
    vector<int> bin, ans;
    while(n){
    	bin.pb(n%2);
    	n/=2;
    }
	reverse(all(bin));
	forn(i, 0, bin.size()){
		int ls=0, rs=0;
		forn(j, i+1, bin.size()){
			if (bin[j] == 1) rs++;
		}
		rofn(j, i-1, -1){
			if (bin[j] == 1) ls++;
		}
		ans.pb(ls == rs);
	}
	reverse(all(ans));
	ll res = 0;
	forn(i, 0, ans.size()){
		res += (1LL << i) * ans[i];
	}
	// for (auto& c : ans)cout << c;
	cout << res;
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