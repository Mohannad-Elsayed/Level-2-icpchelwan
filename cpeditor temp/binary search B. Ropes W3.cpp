// Problem: B. Ropes
// Contest: Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
// Memory Limit: 256 MB
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
ll n, k, tmp;
vector<double> v;
bool ok(double mid){
	int sum = 0;
	for (auto x : v){
		sum += (ll)(x/mid);
		if (sum >= k) return true;
	}
	return false;
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cin >> n >> k;

    forn(i, 0, n){ cin >> tmp; v.push_back(tmp);}
    double r = LLONG_MAX, l = 0, mid, res = -1;
    int iterations = 300;
    while(fabs(l-r) >= 1e-6){
    	mid = (l+r)/2;
    	// cout << mid << endl;
    	if (ok(mid)){
    		res = mid;
    		l = mid;
    	}
    	else r = mid;
    }
    cout << setprecision(6) << fixed << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
