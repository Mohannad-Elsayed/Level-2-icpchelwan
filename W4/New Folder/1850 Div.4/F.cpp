// Problem: F. We Were Both Children
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// By: Sakura Yamauchi
// When: 2024-02-24 14:07:04
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
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp, z = 0; cin >> n;
    multiset<int> arr;
    forn(i, 0, n){
    	cin >> tmp;
    	if (tmp == 1) z++;
    	else arr.insert(tmp);
    }
    
    
    map<int, int> mp;
    bool flag = false;
    for(auto it = arr.begin(); it!= arr.end(); ++it){
    	int x = *it;
		cout << "here " << x << endl;
    	if (x > n) continue;
    	mp[x]++;
    	for (ll p = 2; p*p <= x; p++){
    		if (!(x%p)){
    			if (arr.count(p)) mp[p]++;
    			if (arr.count(x/p) && x/p != p) mp[x/p]++;
    		}
    	}
    	
    }
    int mx = 0;
    // cout << "# ";for (auto [x, y] : mp) cout << x << ' ' << y << '\n';
    for (auto [x, y] : mp){
    	if (y > mx) mx = y;
    }
    // cout << '\n' << z << '\n';
    cout << z+mx;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
