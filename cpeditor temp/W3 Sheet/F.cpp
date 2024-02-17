// Problem: F - Sagheer and Nubian Market
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
map<int, int> mp;
ll n, bud, tmp, price = 0, resprice = 0;
bool ok(int m){
	price = 0;
	auto it = mp.begin();
	forn(i, 0, m){
		price += ((it -> F) + (m * (it -> S))); it++;
		if (price > bud){
			return false;
		}
	}
	return (resprice = price), true;
} 
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n >> bud;
    forn(i, 1, n+1){
    	cin >> tmp;
    	mp[tmp] = i;
    }
    int l = 0, r = n, m, res = 0;
    while(l<=r){
    	m = (l+r)/2;
    	if (ok(m)){
    		res = m;
    		l = m+1;
    	} else r = m-1;
    }
    cout << res << ' ' << resprice;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
