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
const int MOD = 1000000007;
// Number of divisors
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n;
    ll cnt = 1;
    map<ll, ll> primes;
    for (int j = 1; j<=n; ++j){
    	int curr = j;
    	while(!(curr%2)){
    		primes[2]++;
    		curr/=2;
    	}
    	for (int i = 3; i*i<=curr; i+=2){
    		while(!(curr%i)){
    			primes[i]++;
    			curr/=i;
    		}
    	}
    	if (curr!=1)primes[curr]++;
    }
    // for(auto [x, y] : primes) cout << x << ' ' << y << '\n';
    for(auto [x, y] : primes){
    	cnt *= (y+1);
    	cnt %= MOD;
    	// cout << cnt << '\n';
    }
    cout << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}