// Problem: C. They Are Everywhere
// Contest: Codeforces - Codeforces Round 364 (Div. 2)
// URL: https://codeforces.com/contest/701/problem/C
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
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
string s; int dis;
bool ok(int m){
	int n = s.length();
	unordered_map<char, int> mp; int dsst = 0;
	forn(i, 0, m){
		mp[s[i]]++;
		if (mp[s[i]] == 1) dsst++;
	}
	if (dsst == dis) return true;
	forn(i, m, n){
		mp[s[i]]++;
		if (mp[s[i]] == 1) dsst++;
		if (dsst == dis) return true;
		mp[s[i-m]]--;
		if (mp[s[i-m]] == 0) dsst--;
	}
	return false;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    cin >> s;
    set<char> ste;
    for (char ch : s) ste.insert(ch);
    dis = ste.size();
    map<char, int> mp;
    int l = 0, r = n, m, ans = -1;
    while(l<=r){
    	m = (l+r)/2;
    	if (ok(m)){
    		ans = m;
    		r = m-1;
    	} else l = m+1;
    }
    cout << ans+1;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
