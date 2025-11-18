#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a, b, n; cin >> a >> b >> n;
        int ans = 0;
        bool mudou = 0;
        if(a <= b) cout << 1 << endl;
        else{
        for(int i = n;i > 0;i--){
            if(((float)(a/i)) >= (float)(b)) break;
            else{
                if(!mudou){
                    ans++;
                    mudou = 1;
                }
            }
        }
        ans++;
        cout << ans << endl;
    }
}

}