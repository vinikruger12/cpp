#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        vector<int> a(2), b(2);

        cin >> a[0] >> a[1];
        b[0] = a[0];
        b[1] = a[1];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());


        
        int res = 0;
        int k = 0;
        bool neg = 0;
        while(true){

            for(int i = 0;i < 2;i++){
                if(neg) break;
               
                if((a[i] - pow(2,k)) >= 0){
                    a[i] -= pow(2, k);                   
                    res++;
                }else neg = 1;
    
                k++;
            }
            
            if(neg) break;
        }
        int res1 = 0;
        neg = 0;
        k = 0;
        while(true){

            for(int i = 0;i < 2;i++){
                if(neg) break;
               
                if((b[i] - pow(2,k)) >= 0){
                    b[i] -= pow(2, k);                   
                    res1++;
                }else neg = 1;
                k++;
            }
            
            if(neg) break;
        }

        cout << max(res, res1) << endl;
    }
}
