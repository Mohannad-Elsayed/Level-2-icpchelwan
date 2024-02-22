// Problem: J - Arena of Greed
// Contest: Virtual Judge - Week #4
// URL: https://vjudge.net/contest/610907#problem/J
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-22 11:24:34
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
    ll n; cin >>n;
    ll p1 = 0, p2 = 0;
    forn(i, 1, 2000){
    	if (!n) break;
    	if (i%2){
    		if (!(n%2)){
    			p1 += n/2;
    			n/=2;
    		}
    		else{
    			p1++;
    			n--;
    		}
    	}
    	else{
    		if (!(n%2)){
    			p2 += n/2;
    			n/=2;
    		}
    		else{
    			p2++;
    			n--;
    		}
    	}
    }
    cout << p1;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    // return solve(); // Comment this if problem has multiple tests
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << "\n "[(t==0)];}return 0;}
