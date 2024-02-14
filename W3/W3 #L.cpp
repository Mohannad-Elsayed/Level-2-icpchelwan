// Problem: L - ACM T-Shirt
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/L
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, q, tmp, res; cin >> n >> q;
    set<int> ste;
    forn(i, 0, n){
    	cin >> tmp; ste.insert(tmp);}
    while(q--){
    	cin >> tmp;
    	auto it = ste.lower_bound(tmp);
    	// cout << tmp << endl;
    	if (it == ste.begin())
    		res = *it;
    	else if (it == ste.end())
    		res = *(--it);
    	else{
    		int res1 = *it;
    		--it;
    		int res2 = *it;
    		if (abs(tmp-res1) == abs(tmp-res2)) res = min(res1, res2);
    		else if (abs(tmp-res1) > abs(tmp-res2)) res = res2;
    		else res = res1;
    	}
    	cout << res << '\n';
		
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
