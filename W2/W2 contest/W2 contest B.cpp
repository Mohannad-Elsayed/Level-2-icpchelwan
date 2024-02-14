	// Problem: B - Interesting drink
	// Contest: Virtual Judge - Contest #2
	// URL: https://vjudge.net/contest/609127#problem/B
	// Memory Limit: 256 MB
	// Time Limit: 2000 ms
	// By: Sakura Yamauchi
	// 
	// Powered by CP Editor (https://cpeditor.org)
	
	#include<bits/stdc++.h>
	using namespace std;
	// #define int long long int
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
	    int n, tmp, q; cin >> n;
	    multimap<int, int> mp;
	    while(n--){
	    	cin >> tmp;
	    	mp.insert({tmp, 1});
	    } int i = 1;
	  	for (auto it = mp.begin(); it!= mp.end(); ++it, ++i) it -> second = i;
	  	cin >> q; 
	  	while(q--){
	  		cin >> tmp;
	  		if (tmp < mp.begin() -> first) { cout << 0 << '\n'; continue;}
	  		auto it = mp.upper_bound(tmp);
	  		--it;
	  		cout << it -> second << '\n';
	  	}
	    // !Stop Here! */
	    return 0;
	}
	int main(){
	    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	    return solve();
	    return tests();
	}
	int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
	