#include <bits/stdc++.h>
using namespace std;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
	int lines, prints;
	cin >> lines >> prints;
	map<int, int> sell, buy;
	while(lines--){
		char dir; int price, volume;
		cin >> dir >> price >> volume;
		// cout << dir << ' ' << price << ' ' << volume << endl;
		if (dir == 'B'){
			if (!buy.count(price)) buy[price] = volume;
			else buy[price] += volume;
		}
		else if (dir == 'S'){
			if (!sell.count(price)) sell[price] = volume;
			else sell[price] += volume;
		}
	}
	// printing sell orders
	int cntprint = 0;
	for (auto [i,j] : sell){ 
		cout << 'S' << ' ' << i << ' ' << j << '\n';
		cntprint++;
		if (cntprint == prints) break;
	}
	cntprint = 0;
	for (auto it = buy.rbegin(); it != buy.rend(); ++it){
		cout << 'B' << ' ' << it -> first << ' ' << it -> second << '\n';
		cntprint++;
		if (cntprint == prints) break;
	}
	return 0;
}
