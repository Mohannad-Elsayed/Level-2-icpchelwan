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
	sort(v.rbegin(), v.rend());
	for (int i = 0; i<v.size(); ++i){
		ld dism = dis(m1, m2, v.at(i).first, v.at(i).second);
		ld disz = dis(z1, z2, v.at(i).first, v.at(i).second);
		if (dism > disz){
			res += dism;
			res += dis(b1, b2, v.at(i).first, v.at(i).second);
			m1 = b1; m2 = b2;
		}
		else if (dism < disz){
			res += disz;
			res += dis(b1, b2, v.at(i).first, v.at(i).second);
			z1 = b1; z2 = b2;
		}
	}
	
	cout << fixed << setprecision(12) << res << "  lol";
	return 0;
}
