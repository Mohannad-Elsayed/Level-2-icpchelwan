#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define FOR(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define ROF(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int

/*Calculate the distance*/
ld dis(ld x1, ld y1, ld x2, ld y2){
	return sqrt(((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)));
}

int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int a, b; cin >> a >> b;
    cout << a+b;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}