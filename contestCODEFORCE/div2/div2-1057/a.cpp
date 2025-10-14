#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> b;
        for(int i = 0;i < n;i++){
            int a; cin >> a;
            b.insert(a);
        }
        cout << b.size() << endl;

    }

}