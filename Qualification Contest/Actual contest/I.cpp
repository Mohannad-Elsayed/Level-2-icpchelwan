// Problem: I. Non-Prime
// Contest: Codeforces - Level 3 Qualification Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/507591/problem/I
// When: 2024-03-07 14:24:05

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int sze = 1e7;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
	
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll test = 1;
    cin >> test;
    ll arr[test];
    vector<bool> v(sze, 1);
    vector<ll> p;
    forn(i, 0, test){
    	// cout << "# " << i << '\n';
      	cin >> arr[i];
    }
    sort(arr, arr+test);
    // each(x, arr) cout << x << ' ';
    for (ll i = 2; i; ++i){
    	if (v[i]){
    		p.pb(i);
    		for (ll j = i*i; j<sze; j+=i) v[j] = false;
    	}
    	if (p.size() > 2 * 100000 + 10) break;
    }
    v.resize(0);
    each(test, arr){
        cout << p[test] * p[test] << '\n';
    }
}