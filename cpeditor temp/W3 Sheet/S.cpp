// Problem: S - New String
// Contest: Virtual Judge - Week #3
// URL: https://vjudge.net/contest/609587#problem/S
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-17 07:44:23
// Topic: Compare function
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
map<char, int> mp;
bool comp(string s1, string s2){
	forn(i, 0, min(s1.length(), s2.length())){
		if (mp[s1[i]] < mp[s2[i]]){
			return true;
		}
		else if (mp[s1[i]] > mp[s2[i]]){
			return false; 
		}
	}
	return s1.length() < s2.length();
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, k;
    forn(i, 1, 27){
    	char tmp; cin >> tmp;
    	mp[tmp] = i;
    }
    // for (auto [x, y] : mp) cout << x << ' ' << y << endl;
    cin >> n;
    vector<string> v;
    forn(i, 0, n){
    	string ttmp; cin >> ttmp;
    	v.pb(ttmp);
    	
    }
    sort(all(v), comp);
    // for (string sss : v) cout << sss << endl;
    cin >> k;
    cout << v[k-1];
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
