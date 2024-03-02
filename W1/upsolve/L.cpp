// Problem: L - Card Deck
// Contest: Virtual Judge - Week #1
// URL: https://vjudge.net/contest/607207#problem/L
// When: 2024-03-02 17:46:34

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
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
int test = 1;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, mx = INT_MIN; cin >> n;
    deque<int> dq; int tmp[n];
    forn(i, 0, n){
    	cin >> tmp[i];
    	if (tmp[i] > mx){
    		dq.emplace_front(i);
    		mx = tmp[i];
    	}
    }
    dq.emplace_front(n);
    // each(x, dq) cout << x << ' ';
    forn(i, 1, dq.size()){
    	forn(j, dq[i], dq[i-1]){
    		cout << tmp[j] << ' ';
    	}
    }
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