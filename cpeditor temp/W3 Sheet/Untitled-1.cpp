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
    int n; cin >> n; int pfx = 0, arr[n];
    forn(i, 0, n){
        cin >> arr[i];
        pfx += arr[i];
        arr[i] = pfx;
    }
    for (int x : arr) cout << x << ' ';
    sort(arr, arr+n);
    forn(i, 1, n){
        if (arr[i] == arr[i-1]){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}