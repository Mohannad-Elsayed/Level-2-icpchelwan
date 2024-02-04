#include <bits/stdc++.h>
using namespace std;

int main() { 
	string msg; getline(cin>>ws, msg);
	
	string nums[10];
	int pass[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	for (int i = 0; i<10; ++i){
		getline(cin >> ws, nums[i]);
	}
	string demsg = "";
	for (int indx = 0; indx < 80; indx += 10){
		string current = msg.substr(indx, 10);
		for (int i = 0; i<10; ++i){
			if (current != nums[i]) continue;
			demsg += (char)(i+'0');
			break;
		}
		
	}
	cout << demsg;
	// cout << '\n' << msg;
	return 0;
}
