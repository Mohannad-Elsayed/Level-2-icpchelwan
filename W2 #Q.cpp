#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

ld dis(ld x1, ld y1, ld x2, ld y2){
	return sqrt(pow(abs(x1-x2), 2) + pow(abs(y1-y2), 2));;
}

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
	
	map<string, string> oldnew, newold;
	int n; cin >> n;
	while(n--){
		string old, neew; 
		cin >> old >> neew;
		if (newold.find(old) != newold.end()){
			oldnew[newold[old]] = neew;
			newold[neew] = old;
		}
		else{
			oldnew[old] = neew;
			newold[neew] = old;
		}
	}
	cout << oldnew.size() << '\n';
	for (auto [i, j] : oldnew) cout << i << ' ' << j << '\n';
	return 0;
}
