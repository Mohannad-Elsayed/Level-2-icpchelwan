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
    ld kx, ky, ax, ay, bx, by, res = 0;
    int n;
    cin >> kx >> ky >> ax >> ay >> bx >> by >> n;
    ld botx, boty; ld bb[n], ab[n], kb[n];
    vector<vector<ld>> v(n);
    FOR(i, 0, n){
        cin >> botx >> boty;
        bb[i] = dis(botx, boty, bx, by);
        kb[i] = dis(botx, boty, kx, ky);
        ab[i] = dis(botx, boty, ax, ay);
        v.at(i).push_back(bb[i]);
        v.at(i).push_back(kb[i]);
        v.at(i).push_back(ab[i]);
    }
    sort(v.begin(), v.end(), greater<vector<ld>>());
    bool kk = false, aa = false;

    FOR(i, 0, n){
        res += v[i][0];
        ld mn = min(v[i][2] , v[i][1]);
        if (mn == v[i][2] && aa) mn = v[i][1];
        else if (mn == v[i][1] && kk) mn = v[i][2];
        if (mn > v[i][0] && (aa || kk)){
            res += v[i][0];
        }
        else if (i==n-1 && (!aa && !kk)){
            res += mn;
        }

        else if (mn == v[i][1] && !kk){
            res += mn;
            kk = true;
        }
        else if (mn == v[i][2] && !aa){
            res += mn;
            aa = true;
            // cout << v[i][2] << " aa ";
        }
        else{
            res += v[i][0];
        }
    }
    cout << fixed << setprecision(12) << res;

    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}
