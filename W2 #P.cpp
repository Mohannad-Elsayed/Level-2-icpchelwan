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
    ld stx, sty, ax, ay, bx, by, res = 0;
    int n;
    cin >> stx >> sty >> ax >> ay >> bx >> by >> n;
    vector<pair<ld, ld>> v(n);
    FOR(i, 0, n) cin >> v.at(i).first >> v.at(i).second;

    ld min_dis_st = LLONG_MAX, min_dis_a = LLONG_MAX, curr_dis_st, curr_dis_a;
    int min_indx_st, min_indx_a;
    FOR(i, 0, n){
        ld xb = v.at(i).first, yb = v.at(i).second;
        curr_dis_st = dis(xb, yb, stx, sty) + dis(bx, by, xb, yb);
        curr_dis_a =  dis(xb, yb, ax, ay)   + dis(bx, by, xb, yb);
        // cout << fixed << setprecision(12) << curr_dis_st << ' ' << curr_dis_a << ' ' << endl;
        if (min_dis_a > curr_dis_a){
            min_dis_a = curr_dis_a;
            min_indx_a = i; 
        }
        {
            if (min_dis_st > curr_dis_st){
                min_dis_st = curr_dis_st;
                min_indx_st = i;
            }
        }
    }
    if (min_dis_a < min_dis_st){ swap(stx, ax); swap(sty, ay); swap(min_dis_a, min_dis_st); swap(min_indx_a, min_indx_st);}

    // cout << fixed << setprecision(12) << min_dis_st << ' ' << min_dis_a << ' ' << min_indx_st << ' ' << min_indx_a << endl << endl;

    sort(v.rbegin(), v.rend());

    res += min_dis_st; v.erase(v.begin() + min_indx_st);
    FOR(i, 0, v.size()){
        ld xb = v.at(i).first, yb = v.at(i).second;
        curr_dis_st = 2 * dis(bx, by, xb, yb);
        curr_dis_a  = dis(xb, yb, ax, ay) + dis(bx, by, xb, yb);
        // cout << xb << ' ' << yb << "  ==  ";
        // cout << fixed << setprecision(12) << curr_dis_a << ' ' << curr_dis_st << ' ' << endl;
        if (curr_dis_a < curr_dis_st){
            curr_dis_st = curr_dis_a; 
            ax = bx; ay = by;
        }
         res += curr_dis_st;
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
