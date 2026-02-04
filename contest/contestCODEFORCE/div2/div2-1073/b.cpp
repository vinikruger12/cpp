#include <bits/stdc++.h>

using namespace std;

vector<int> a;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       a.resize(n);
       for(int i = 0;i < n;i++) cin >> a[i];
       map<int, int> freq;
       for(int i = 0;i < n;i++){
            freq[a[i]]++;
       }

       if(freq[0] == 1) cout << "YES" << endl;
       else if(freq[0] > 1 && freq[1] > 1) cout << "YES" << endl;
       else cout << "NO" << endl; 
       
    }

}