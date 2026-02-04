#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        map<int, int> freqL, freqC;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                char c; cin >> c;
                if(c == '#'){
                    freqL[i]++;
                    freqC[j]++;
                }
            }
        }

        int maiori = 0, maiorj = 0;
        int i = 0, j = 0;
        
        for(int k = 0;k < n;k++){
            if(maiori < freqL[k]){
                i = k;
                maiori = freqL[k];
            }
        }

        for(int k = 0;k < m;k++){
            if(maiorj < freqC[k]){
                j = k;
                maiorj = freqC[k];
            }
        }

        cout << i + 1 << ' ' << j + 1 << endl;

    }
}