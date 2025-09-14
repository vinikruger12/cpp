#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;
	ll total = 0;
	vector<ll> a;
	
    for(int i = 0; i < n; i++){
		if(s[i] == 'L') {
			a.push_back((n - 1 - i) - i);
			total += i;
		}
		else{
			a.push_back(i - (n - 1 - i));
			total += n - 1 - i;
		}
	}
	sort(a.begin(), a.end(), greater<int>());

	for(int i = 0;i < n;i++){
		if(a[i] > 0) total += a[i];
		cout << total << ' ';
	}
	cout << endl;
}

int main() {
	
	int t; cin >> t;
    while(t--) solve();
}




