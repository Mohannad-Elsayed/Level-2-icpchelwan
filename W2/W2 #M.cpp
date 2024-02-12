// Problem: M - Traffic Lights
// Contest: Virtual Judge - Week #2
// URL: https://vjudge.net/contest/608666#problem/M
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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
    int n, q, tmp; cin >> n;
    map<int, int> mp {{0, n}};
    multiset<int> mste {n};
    cin >> q;
    while(q--){
    	cin >> tmp;
    	auto it = mp.lower_bound(tmp); --it;
    	// cout << (*it).F << ' ' << (*it).S << endl;
    	auto msterase = mste.find(((*it).S - (*it).F));
    	mste.erase(msterase);
    	mp[tmp] = (*it).S;
    	mste.insert(((*it).S - tmp));
    	mp[(*it).F] = tmp;
    	mste.insert((tmp - (*it).F));
    	cout << *mste.rbegin() << ' ';
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
