#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define ys cout << "YES";
#define ns cout << "NO";
#define ll long long
bool isprime(ll a){
	for (ll i = 2; i*i<=a; i++){
		if (!(a%i)) return false;
	}
	return true;
}
int tests(); int solve(){
    ll a, b; 
    cin >> a >> b;
    if (a-b != 1) return (cout << "NO"), 0;
    a += b;
    if (isprime(a)) ys
    else ns
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
