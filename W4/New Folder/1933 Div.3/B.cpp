 // Problem: B. Turtle Math: Fast Three Task
// Contest: Codeforces - Codeforces Round 929 (Div. 3)
// URL: https://codeforces.com/contest/1933/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-27 16:40:03
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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp; cin >> n;
    ll sum = 0;
    set<int> ste;
    forn(i, 0, n){
    	cin >> tmp;
    	sum += tmp;
    	ste.insert(tmp%3);
    }
    int res = 0;
    int mod = sum%3;
    if (mod == 1){
    	if (ste.count(1)){
    		res = 1;
    	}
    	else res = 2;
    }
    else if (mod == 2){
    	if (ste.count(2) || ste.count(1)){
    		res = 1;
    	}
    	else res = 2;
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}