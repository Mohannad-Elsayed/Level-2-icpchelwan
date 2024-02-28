// Problem: F - 3SUM
// Contest: Virtual Judge - Contest #4
// URL: https://vjudge.net/contest/610910#problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// By: Sakura Yamauchi
// When: 2024-02-25 21:14:46
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
    multimap<int, int> mp;
    int n, tmp; cin >> n;
    int arr[n];
    forn(i, 0, n){
    	cin >> tmp;
    	tmp %= 10;
    	// cout << tmp << ' ';
    	mp.insert({tmp, i});
    	arr[i] = tmp;
    }
	// cout << '\n';
	forn(i, 0, n){
		forn(j, i+1, n){
			int sv = arr[i] + arr[j];
			for (int kv = 3; kv<=23; kv+=10){
				
				auto it = mp.find(kv-sv);
				// cout  << (it == mp.end()) << ' ' << it -> first << ' ' << it -> second << '\n';
				// cout << "    # " << sv << ' ' << arr[i] << ' ' << arr[j] << "## " << i << ' ' << j << '\n';
				if (it != mp.end()){
					if (it -> second != i && it -> second != j){
						ys return 0;
					}
					if (it -> second == i || it -> second == j){
						it++;
					}
					if (it -> first != kv-sv) continue;
					if (it -> first == kv-sv && (it -> second == i || it -> second == j)){
						it++;
					}
					if (it -> first != kv-sv) continue;
					if (it -> first == kv-sv){
						ys return 0;
					}
				}
			}
		}
	}
	ns
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
