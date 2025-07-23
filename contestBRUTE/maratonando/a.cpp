#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int bolso = 0;

        vector<int> vec(n);

        for(int i = 0;i < n;i++){
            cin >> vec[i];
            
        }

        int res = 0;

        for(int i = 0;i < n;i++){
            if(vec[i] >= k) bolso += vec[i];
            
            if(vec[i] == 0 && bolso > 0){
                res++;
                bolso--;
            }
        }

        cout << res << endl;
    }
    
}