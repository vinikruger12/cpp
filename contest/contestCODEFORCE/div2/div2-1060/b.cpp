#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        bool isGood = 1;
        for(int i = 0;i < n;i++){
            
            if(i % 2 != 0){
                if(a[i] <= a[i-1] || a[i] <= a[i+1]) isGood = 0;
            }
            else{
                if(a[i] >= a[i-1] || a[i] >= a[i+1]) isGood = 0;
            }
        }
        if(isGood) cout << 0 << endl;
        else{
            int maior = 0;
            for(int i = 0;i < n;i++){
                maior = max(maior, a[i]);
                if(i % 2 != 0) a[i] = maior;
            }

            int res = 0;
            for(int i = 0;i < n;i++){
                if(i % 2 == 0){
                    if(i == 0){
                        if(a[i] > a[i+1]){
                            res += abs(a[i] - a[i+1]) + 1;
                        }
                        else if(a[i] == a[i+1]){
                            res += 1;
                        }
                    }
                    else if(i == (n-1)){
                        if(a[i] > a[i-1]){
                            res += abs(a[i] - a[i-1]) + 1;
                        }
                        else if(a[i] == a[i-1]){
                            res += 1;
                        }
                    }
                    else{
                        if(a[i] >= a[i-1]){
                            int outro = abs(a[i] - a[i-1]);;
                            outro++;
                            a[i] -= outro;
                            res += outro;
                        }
                        if(a[i] >= a[i+1]){
                            int outro = abs(a[i] - a[i+1]);
                            outro++;
                            a[i] -= outro;
                            res += outro;
                        }
                    }
                }
            }
            cout << res << endl;
        }
    }

}