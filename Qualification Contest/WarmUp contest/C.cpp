// Problem: C. Can you sort ?
// Contest: Codeforces - Practice Contest
// URL: https://codeforces.com/group/aTBjagg0Ld/contest/509170/problem/C
// When: 2024-03-07 11:02:04

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
bool comp(ll a, ll b){
	if (a%2){
		if (b%2){
			return a < b;
		}
		else return true;
	}
	else{
		if (b%2) return false;
		else return a > b;
	}
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    cout << "yes"
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    // cout << "# " << test << '\n';
    while(test--){
      solve();
      cout << '\n';
    }
}