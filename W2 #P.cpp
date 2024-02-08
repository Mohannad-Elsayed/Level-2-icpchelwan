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
	
	ld res = 0;
	ld m1, m2, z1, z2, b1, b2;
	int n, indx;
	vector<pair<ld, ld>> v;
	cin >> m1 >> m2 
	>> z1 >> z2 >> 
	b1 >> b2 >> n;
	for (int i = 0; i<n; ++i){
		pair<ld, ld> p;
		cin >> p.first >> p.second;
		v.push_back(p);
	}
	ld min_distance = LLONG_MAX, curr_distance; int i;
	for (i = 0; i<v.size(); ++i){ // calculate the nearest bottle to mohannad
		curr_distance = dis(z1, z2, v.at(i).first, v.at(i).second);
		if (curr_distance < min_distance){
			min_distance = curr_distance;
			indx = i;
		}
	}
	
	// cout << "Min: " << min_distance << endl;
	res += min_distance;
	curr_distance = dis(v.at(indx).first, v.at(indx).second, b1, b2);
	res += curr_distance;
	v.erase(v.begin()+indx);
	
	if (!--n){ cout << fixed << setprecision(12) << res; return 0;}
	
	min_distance = LLONG_MAX;
	for (i = 0; i<v.size(); ++i){ // calculate the nearest bottle to mazen
		curr_distance = dis(m1, m2, v.at(i).first, v.at(i).second);
		if (curr_distance < min_distance){
			min_distance = curr_distance;
			indx = i;
		}
	}
	
	res += min_distance;
	curr_distance = dis(v.at(indx).first, v.at(indx).second, b1, b2);
	cout << "Cur: " << curr_distance << endl;
	res += curr_distance;
	v.erase(v.begin()+indx);
	
	if (!--n){ cout << fixed << setprecision(12) << res; return 0;}
	
	cout << "Rer: " << res << endl;
	for (i = 0; i<v.size(); ++i){ // calculate the remaining bottles for any of them, it doesn't matter
		res += (2 * dis(b1, b2, v.at(i).first, v.at(i).second));
		cout << v.at(i).first << ' ' <<  v.at(i).second << endl;

	}
	// cout << fixed << setprecision(12) << min_distance;
	// cout << fixed << setprecision(12) << dis(0, 1, 1, 0);
	cout << fixed << setprecision(12) << res << "  lol";
	return 0;
}
