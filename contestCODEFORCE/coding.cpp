#include <bits/stdc++.h>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    int j = -1;
    for(int i = 0;i < n;i++){
        if(a[i] >= m){
            j = i+1;
            break;
        }
    }
    cout << j << endl;

}